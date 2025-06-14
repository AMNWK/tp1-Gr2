//directive de compilation par ange



//fonction addition par amina


//fonction soustraction par aida
float soustraction(float a, float b) {
    return a - b;
}




//fonction mutiplication par ange
float multiplication(float a, float b){
    return a*b;
}


//fonction division par amina


//methode main par aida
main() {
    float a, b;
    printf("Entrez deux nombres: ");
    scanf("%f %f", &a, &b);
    
    printf("Addition: %.2f\n", addition(a, b));
    printf("Soustraction: %.2f\n", soustraction(a, b));
    printf("Multiplication: %.2f\n", multiplication(a, b));
    printf("Division: %.2f\n", division(a, b));
    
    return 0;
}
