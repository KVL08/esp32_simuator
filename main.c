#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mosquitto.h>

void publish_sensor_data() {
    struct mosquitto *mosq = mosquitto_new(NULL, true, NULL);
    mosquitto_connect(mosq, "localhost", 1883, 60);

    char payload[100];
    float temperature = 25.5;
    float humidity = 50.2;
    snprintf(payload, sizeof(payload), "{\"temperature\": %.2f, \"humidity\": %.2f}", temperature, humidity);

    mosquitto_publish(mosq, NULL, "home/sensors", strlen(payload), payload, 0, false);
    printf("Published: %s\n", payload);

    mosquitto_disconnect(mosq);
    mosquitto_destroy(mosq);
}

int main() {
    mosquitto_lib_init();
    while (1) {
        publish_sensor_data();
        sleep(5);
    }
    mosquitto_lib_cleanup();
    return 0;
}
