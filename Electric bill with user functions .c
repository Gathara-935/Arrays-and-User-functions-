/*
//program to input user functions 
Author: Maxwell Gathara 
Reg no:CT101/G/22271/24
Date:17/10/2024
*/
#include <stdio.h>

// Function prototypes
void getInput(int *CustomerID, char CustomerName[], int *UnitConsumed);
float calculateBill(int UnitConsumed);
float applySurcharge(float total_bill);
void displayResult(int CustomerID, char CustomerName[], int UnitConsumed, float charge_per_unit, float total_bill);

int main() {
    int CustomerID, UnitConsumed;
    char CustomerName[50];
    float total_bill, charge_per_unit;

    // Step 1: Call function to get input
    getInput(&CustomerID, CustomerName, &UnitConsumed);

    // Step 2: Calculate the total bill using a function
    total_bill = calculateBill(UnitConsumed);

    // Step 3: Apply surcharge if needed
    if (total_bill > 400) {
        total_bill = applySurcharge(total_bill);
    }

    // Step 4: Ensure the minimum bill is 100
    if (total_bill < 100) {
        total_bill = 100;
    }

    // Determine charge per unit for display purposes
    if (UnitConsumed <= 199) {
        charge_per_unit = 1.20;
    } else if (UnitConsumed >= 200 && UnitConsumed < 400) {
        charge_per_unit = 1.50;
    } else if (UnitConsumed >= 400 && UnitConsumed < 600) {
        charge_per_unit = 1.80;
    } else {
        charge_per_unit = 2.00;
    }

    // Step 5: Display results using a function
    displayResult(CustomerID, CustomerName, UnitConsumed, charge_per_unit, total_bill);

    return 0;
}

// Function to get input
void getInput(int *CustomerID, char CustomerName[], int *UnitConsumed) {
    printf("Enter Customer ID: ");
    scanf("%d", CustomerID);

    printf("Enter Customer Name: ");
    scanf("%s", CustomerName);

    printf("Enter Units Consumed: ");
    scanf("%d", UnitConsumed);
}

// Function to calculate total bill
float calculateBill(int UnitConsumed) {
    float charge_per_unit, total_bill;

    if (UnitConsumed <= 199) {
        charge_per_unit = 1.20;
    } else if (UnitConsumed >= 200 && UnitConsumed < 400) {
        charge_per_unit = 1.50;
    } else if (UnitConsumed >= 400 && UnitConsumed < 600) {
        charge_per_unit = 1.80;
    } else {
        charge_per_unit = 2.00;
    }

    total_bill = UnitConsumed * charge_per_unit;
    return total_bill;
}

// Function to apply surcharge
float applySurcharge(float total_bill) {
    return total_bill + (total_bill * 0.15); // Add 15% surcharge
}

// Function to display the result
void displayResult(int CustomerID, char CustomerName[], int UnitConsumed, float charge_per_unit, float total_bill) {
    printf("Customer ID: %d\n", CustomerID);
    printf("Customer Name: %s\n", CustomerName);
    printf("Units Consumed: %d\n", UnitConsumed);
    printf("Charge per Unit: %.2f\n", charge_per_unit);
    printf("Total Amount to Pay: %.2f\n", total_bill);
}