#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Analyze and recommend actions
void analyze_data_and_recommend(float moisture, float temp, char soil_type[20]) {
    printf("\n📋 ANALYSIS REPORT:\n");
    printf("🌱 Soil Moisture: %.2f%%\n", moisture);
    printf("🌡️ Temperature: %.2f°C\n", temp);
    printf("🧪 Soil Type: %s\n", soil_type);

    // Watering Logic
    if (moisture < 30 && temp > 32) {
        printf("💧 Recommendation: Water your crops now.\n");
    } else {
        printf("✅ Soil moisture is sufficient.\n");
    }

    // Fertilizer Logic
    if (strcmp(soil_type, "sandy") == 0 && moisture > 25 && moisture < 40) {
        printf("🌿 Sandy soil: Apply fertilizer more frequently, 60%% NPK.\n");
    } else if (strcmp(soil_type, "clay") == 0 && moisture > 30) {
        printf("🌿 Clay soil: Fertilizer once every 10 days at 40%% rate.\n");
    } else {
        printf("🌿 Fertilizer: Apply standard 50%% NPK.\n");
    }

    // Pest Alert (example)
    if (temp > 35) {
        printf("🐛 Pest risk high! Monitor for insects or apply bio-control.\n");
    }

    printf("-----------------------------------\n\n");
}

int main() {
    float soil_moisture, temperature;
    char soil_type[20];

    printf("🚜 Welcome to AgriSense Smart Advisor\n");
    printf("-----------------------------------\n");

    // Get inputs from user
    printf("Enter soil moisture (in %%): ");
    scanf("%f", &soil_moisture);

    printf("Enter temperature (in °C): ");
    scanf("%f", &temperature);

    printf("Enter soil type (sandy / clay / loamy / silty): ");
    scanf("%s", soil_type);

    // Analyze and recommend
    analyze_data_and_recommend(soil_moisture, temperature, soil_type);

    return 0;
}