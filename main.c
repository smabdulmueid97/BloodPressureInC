#include<stdio.h>
void main() {
    int SBP, DBP;
    printf("Enter your SBP & DBP : ");
    scanf("%d", &SBP);
    scanf("%d", &DBP);

    if (SBP < 120 && DBP < 80) {
        printf("Normal Recheck in 2 years");
    } else if (SBP >= 120 && SBP <= 139) {
        printf("Prehypertension Recheck in 1 year");
    } else if (SBP >= 140 && SBP <= 159) {
        printf("High Blood Pressure (Hypertension) Stage 1 Confirm within 2 months");
    } else if (SBP >= 160) {
        printf("High Blood Pressure (Hypertension) Stage 2 Confirm within 1 month");
    } else if (SBP > 180) {
        printf("Hypertensive Crisis See physician immediately (Emergency care needed)");

    } else if (DBP >= 80 && DBP <= 89) {
        printf("Prehypertension Recheck in 1 year");
    } else if (DBP >= 90 && DBP <= 99) {
        printf("High Blood Pressure (Hypertension) Stage 1 Confirm within 2 months");
    } else if (DBP >= 100) {
        printf("High Blood Pressure (Hypertension) Stage 2 Confirm within 1 month");
    } else if (DBP > 110) {
        printf("Hypertensive Crisis See physician immediately (Emergency care needed)");
    }
    else {
        printf("Failed");
    }
}
