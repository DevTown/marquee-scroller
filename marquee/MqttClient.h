#pragma once
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"

class MqttClient{
    private:
        char myServer[100];
        int myPort = 1883;
        String myUsername = "";
        String myPassword = "";
}