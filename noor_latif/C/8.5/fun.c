/*
 ============================================================
 Name		: Uppgift 8.5
 Author		: Noor Latif
 Description: Funktioner för indexberäkningar
 Date		: 2020-10-07
 ============================================================
 */

double sumIndex(double x[], int n) {
    double sum;
    for (int i = 0; i < n; i++) {
        sum += x[i];
    }
    return sum;
}

double kvadSum(double x[], double n) {
    double sum;
    for (int i = 0; i < n; i++) {
        sum += x[i] * x[i];
    }
    return sum;
}