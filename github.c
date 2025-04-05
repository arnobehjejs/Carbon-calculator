#include <stdio.h>
#include <string.h>
struct UserData {
    float car_km;
    float public_km;
    float electricity;
    float gas;
};
float calculateTransport(float car_km, float public_km) {
    float transport_emissions = (car_km * 0.2) + (public_km * 0.1);
    return transport_emissions;
}
float calculateEnergy(float electricity, float gas) {
    float energy_emissions = (electricity * 0.5) + (gas * 2);
    return energy_emissions;
}
void displayTips(float transport_emissions, float energy_emissions) {
    printf("\n=== Eco-Friendly Tips ===\n");
    if (transport_emissions > 50) {
        printf("- Use public transport or carpool instead of driving alone.\n");
    }
    if (energy_emissions > 100) {
        printf("- Switch to renewable energy sources like solar or wind.\n");
    }
}
int main() {
    struct UserData user;
    char name[50];

    printf("=== Eco-Friendly Carbon Footprint Calculator ===\n");
    printf("Enter your name: ");
    scanf("%s", name);
    printf("\n--- Transportation ---\n");
    printf("Enter kilometers traveled by car: ");
    scanf("%f", &user.car_km);
    printf("Enter kilometers traveled by public transport: ");
    scanf("%f", &user.public_km);
    printf("\n--- Energy Usage ---\n");
    printf("Enter electricity usage (kWh): ");
    scanf("%f", &user.electricity);
    printf("Enter gas usage (cubic meters): ");
    scanf("%f", &user.gas);
    float transport_emissions = calculateTransport(user.car_km, user.public_km);
    float energy_emissions = calculateEnergy(user.electricity, user.gas);
    float total_footprint = transport_emissions + energy_emissions;
    printf("\n=== Results for %s ===\n", name);
    printf("Transportation Emissions: %.2f kg CO₂e\n", transport_emissions);
    printf("Energy Emissions: %.2f kg CO₂e\n", energy_emissions);
    printf("Total Carbon Footprint: %.2f kg CO₂e\n", total_footprint);
    displayTips(transport_emissions, energy_emissions);

    return 0;
}
