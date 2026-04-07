#include <stdio.h>
#include <string.h>
#include "Car.h"

int main() {
    SportsCar myCar;

    char tempName[40] = { 0, };
    int inputGear;
    int turboChoice;

    printf("1. Enter car name: ");
    scanf_s("%s", tempName, (unsigned int)sizeof(tempName));

    myCar.setName(tempName);

    printf("2. Enter gear : ");
    scanf_s("%d", &inputGear);
    myCar.changeGear(inputGear);

    printf("3. Turbo? (1: on / 0: off): ");
    scanf_s("%d", &turboChoice);
    myCar.setTurbo(turboChoice == 1);

    printf("\n--- Accelerating .... ---\n");
    myCar.speedUp();
    myCar.display();

    return 0;
}