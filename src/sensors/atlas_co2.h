#ifndef WATERBEAR_ATLAS_CO2
#define WATERBEAR_ATLAS_CO2

#include <string.h>
#include <Arduino.h>

class AtlasCO2 {
  private:
    // Variables
    char inputString[30];
    char sensorString[30];
    bool inputStringComplete;
    bool sensorStringComplete;

    // Sensor Data
    int data;
    
    // Private Functions
    void setupSerial();

  public: 
    // Instance
    static AtlasCO2 * instance();

    // Constructor
    AtlasCO2();

    // Functionality
    void start();
    void sendMessage();
    char * receiveResponse(); 
    char * run();
  
    // Command generation
    int setLEDBrightness(int value, bool powerSaving);
    void setIndicatorLED(bool status, bool power);
    void continuousMode(int value);
    void colorMatching(int value);
    int setBaudRate(int value);
    int proximityDetection(int value);
    int proximityDetection(char value);
    void proximityDetection(bool power);
    int gammaCorrection(float value);
    void nameDevice(char * value);
    void deviceInformation();
    void sleepSensor();
    void factoryReset();
    void singleMode();
    void calibrateSensor();
    void findSensor();
    void getStatus();
};

#endif