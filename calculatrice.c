//directive de compilation par ange



//fonction addition par amina
float addition(float x,float y){
            float s=x+y;
            return s;
}



//fonction soustraction par aida
float soustraction(float a, float b) {
    return a - b;
}




//fonction mutiplication par ange
float multiplication(float a, float b){
    return a*b;
}


//fonction division par amina
float division(float x,float y){
	float q=x/y;
	return q;
}


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
