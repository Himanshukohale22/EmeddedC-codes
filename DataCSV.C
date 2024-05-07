/*

working with CSV file in c



* There are three modes  a - append new data to file 
                         W - write new data to file 
                         r - read data from file

*/





#include <stdio.h>

int main(){

    int H2,CO2,AQI;
    H2 = 100;
    CO2 = 50;
    AQI = 80;

    FILE *datafile;
    datafile = fopen("Data.csv","w+");

    fprintf(datafile,"H2,CO2,AQI \n");

    fprintf(datafile,"%d,%d,%d \n",H2,CO2,AQI);

    fclose(datafile);
}