#include <stdio.h>
#include <string.h>

int menu(void){
    char input[5];
    int out;
    printf(" (1.) C to F\t (3.) F to K\t (5.) C to K\t (7.) EXIT\n");
    printf(" (2.) F to C\t (4.) K to F \t (6.) K to C\t (7.) EXIT\n");
    fflush(stdout);
    fgets(input, 5, stdin);
    sscanf(input, "%i", &out);
    return out;
}

double tempInput(void){
    char tmpinpt[12];
    double out;
    printf("Enter temp. to convert:\n");
    fflush(stdout);
    fgets(tmpinpt, 12, stdin);
    sscanf(tmpinpt, "%lf", &out);
    return out;
}

double cToF(double in){
    return (( in * 9)/5) + 32;
}

double fToC(double in){
    return (5*( in - 32))/9;
}

double fToK(double in){
    return ((100 * fToC(in)) + 27315)/100;
}

double kToF(double in){
    return ((( in * 900)/5) - 45967)/100; 
}

double cToK(double in){
    return (( in * 100) + 27315)/100;
}

double kToC(double in){
    return (( in * 100) - 27315)/100;
}

int main(void){
    for (;;){
        int y = menu(); 
        
        switch (y){
            case 1:
                printf("%lf\n", cToF(tempInput()));
                break;
            case 2:
                printf("%lf\n", fToC(tempInput()));
                break;
            case 3:
                printf("%lf\n", fToK(tempInput()));
                break;
            case 4:
                printf("%lf\n", kToF(tempInput()));
                break;
            case 5:
                printf("%lf\n", cToK(tempInput()));
                break;
            case 6:
                printf("%lf\n", kToC(tempInput()));
                break;
            case 7:
                goto kill;
            default:
                printf("Please try again.\n");
                break;
        }
    }
kill:
}
