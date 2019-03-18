#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int globalVar = 0;



//Structs

struct dogFavs {

    char *food;
    char *friend;

};

typedef struct dog{

    const char *name;
    const char *breed;
    int avgHeightCm;
    int avgWeightLbs;

    struct dogFavs favoriteThings;

} dog;

void getDogInfo(struct dog theDog)
{
    printf("\n");

    printf("Name: %s\n\n", theDog.name);
    printf("Breed: %s\n\n", theDog.breed);
    printf("Avg Height: %d cms\n\n", theDog.avgHeightCm);
    printf("Avg Weight: %d lbs\n\n", theDog.avgWeightLbs);

}

void getMemoryLocations(struct dog theDog)
{
    printf("Name Location: %d\n\n", theDog.name);
    printf("Breed Location: %d\n\n", theDog.breed);
    printf("Average Height Location: %d\n\n", &theDog.avgWeightLbs);
    printf("Average Weight Location: %d\n\n", &theDog.avgHeightCm);
}


//Functions
int addTwoInts(int num1, int num2)
{
    return num1 + num2;
}

void changeVariables()
{
    int age = 40;

    printf("age inside of function = %d\n\n", age);

    globalVar = 100;

    printf("globalVar inside of function = %d\n\n", globalVar);
}

void generateTwoRandomNums(int* rand1, int* rand2)
{
    *rand1 = rand() % 50 + 1;
    *rand2 = rand() % 50 + 1;

    printf("New rand1 in function = %d\n\n", *rand1);
    printf("New rand2 in function = %d\n\n", *rand2);
}

void editMessageSent(char* message, int size)
{
    char newMessage[] = "New Message";
    if(size > sizeof(newMessage)){

        for(int i = 0; i < sizeof(newMessage); i++){

            message[i] = newMessage[i];
        }
    } else{
        printf("New Message is too big\n\n");
    }
}

void getDogsFavs(dog theDog)
{
    printf("\n");

    printf("%s loves %s and his friend is %s\n\n", theDog.name, theDog.favoriteThings.food, theDog.favoriteThings.friend);
}

void setDogWeightPtr(dog *theDog, int newWeight)
{
    (*theDog).avgWeightLbs = newWeight;

    printf("The weight was changed to %d\n\n", (*theDog).avgWeightLbs);
}

void noMoreNewline(char *theString)
{
    char *isANewline;

    isANewline = strrchr(theString, '\n');

    if(isANewline){

        *isANewline = '\0';
    }
}

void makeLowercase(char *theString) {
    int i = 0;

    while(theString[i]) {

        theString[i] = tolower(theString[i]);
        i++;
    }
}

void getCharInfo(){

    char theChar;

    while((theChar = getchar()) != '\n'){
        printf("Letter or Number %d\n\n", isalnum(theChar));

        printf("Alphabetic Char %d\n\n", isalpha(theChar));

        printf("Standard Blank %d\n\n", isblank(theChar));

        printf("Ctrl Char %d\n\n", iscntrl(theChar));

        printf("Number Char %d\n\n", isdigit(theChar));

        printf("Anything But Space %d\n\n", isgraph(theChar));

        printf("Lowercase %d\n\n", islower(theChar));

        printf("Uppercase %d\n\n", isupper(theChar));

        printf("Punctuation %d\n\n", ispunct(theChar));

        printf("Any Space %d\n\n", isspace(theChar));
    }
}

int main() {

//    //Characters and Strings
//    char myName[] = "Moin";
//    strcpy(myName, "Dee");
//    printf("My name is %s\n\n", myName);

//    //ScanF
//    char lastInitial;
//
//    printf("What is your last initial? ");
//    scanf(" %c", &lastInitial);
//    printf("Last initial %c\n", lastInitial);
//
//    char firstName[30], lastName[30];
//
//    printf("What is your name? ");
//
//    scanf(" %s %s", firstName, lastName);
//
//    printf("Your name is %s %c %s\n\n", firstName, lastInitial, lastName);
//
//
//    int month, day, year;
//
//    printf("What's your birth date? ");
//
//    scanf(" %d/%d/%d", &month, &day, &year);
//
//    printf("\nBirth Date %d/%d/%d\n\n", month, day, year);


//    //Math Operators

//    int num1 = 12, num2 = 15, numAns;
//    float decimal1 = 1.2, decimal2 = 1.5, decimalAns;
//
//    printf("Integer Calculation %d\n\n", num2 / num1);
//
//    printf("Float Calculation %f\n\n", decimal2 / decimal1);
//
//    printf("Modulus %d\n\n", num2 % num1);
//
//    printf("Without Parantheses %d\n\n", 3 + 6 * 10);
//
//    printf("With Parantheses %d\n\n", (3+6) * 10);


//    int randomNum = 1;
//
//    printf("%d += 2 : %d\n\n", randomNum, randomNum += 2);
//
//    // %d is printed after the calculation here
//    printf("%d += 2 : %d\n\n", randomNum, randomNum += 2);

//    int exNum = 1;
//
//    printf("++%d : %d\n\n", exNum, ++exNum);
//
//    exNum = 1;
//
//    printf("%d++ : %d\n\n", exNum, exNum++);


//    int numberEx = 12;
//    int numberEx2 = 14;
//
//    printf("NumberEx / NumberEx2: %f\n\n", (float) numberEx / numberEx2);

//    //If statement
//    int num1 = 1, num2 =2;
//
//    printf("Is 1 > 2 : %d\n\n", num1, num2);
//
//    if(num1 > num2) {
//        printf("%d is greater than %d\n\n", num1, num2);
//    } else if(num1 < num2) {
//        printf("%d is less than %d\n\n", num1, num2);
//    } else {
//        printf("%d is equal to %d\n\n", num1, num2);
//    }
//
//    //Logical Operators
//
//    int custAge = 38;
//
//    if(custAge > 21 && custAge < 35) printf("They are welcome\n\n");
//    else printf("They are not welcome\n\n");
//
//    printf("! turns a true into false : %d\n\n", !1);
//
//    int bobMissedDays = 8, bobTotalSales = 24000, bobNewCust = 32;
//
//    if(bobMissedDays < 10 && bobTotalSales > 30000 || bobNewCust > 30) printf("Bob gets a raise");
//    else printf("Bob doesn't get a raise");

//    //Ternary Operator
//    char* legalAge = (custAge > 21) ? "true" : "false";
//
//    printf("Is the customer of legal age? %s\n\n", legalAge);
//
//    int numOfProducts = 10;
//
//    printf("I bought %s products \n\n", (numOfProducts > 1) ? "many": "one");


//    //DataTypes and Byte Size

    //1 byte = 8 bits
    // [0,0,0,0,0,0,0,0] = 0
    // [0,0,0,0,0,0,0,1] = 1
    // [0,0,0,0,0,0,1,0] = 2
    // [0,0,0,0,0,0,1,1] = 3
    // [0,0,0,0,0,1,0,0] = 4

//    printf("\n");
//
//    printf("A char takes up %d bytes\n\n", sizeof(char));
//    printf("A int takes up %d bytes\n\n", sizeof(int));
//    printf("A long takes up %d bytes\n\n", sizeof(long));
//    printf("A float takes up %d bytes\n\n", sizeof(float));
//    printf("A double takes up %d bytes\n\n", sizeof(double));
//
//    int numberHowBig = 0;
//
//    printf("How Many Bits? ");
//    scanf(" %d", &numberHowBig);
//    printf("\n\n");
//
//    int myIncrementor = 1, myMultiplier = 1,
//        finalValue = 1;
//
//    while(myIncrementor < numberHowBig) {
//        myMultiplier *= 2;
//        finalValue = finalValue + myMultiplier;
//        myIncrementor++;
//    }
//
//    if((numberHowBig == 0) || (numberHowBig == 1)) {
//        printf("Top Value: %d\n\n", numberHowBig);
//    } else {
//        printf("Top Value: %d\n\n", finalValue);
//    }

//    //For loop
//
//    //Print only odd numbers
//    for(int counter = 0; counter <= 20; counter++) {
//        if((counter % 2) == 0) continue;
//        printf("%d\n\n", counter);
//    }

//    //Switch Statement
//
//    int whatToDo = 0;
//
//    do {
//
//        printf("\n");
//        printf("1. What time is it?\n");
//        printf("2. What is today date?\n");
//        printf("3. What day is it?\n");
//        printf("4. Quit\n");
//
//        scanf(" %d", &whatToDo);
//    } while(whatToDo < 1 || whatToDo > 4);
//
//
//    switch(whatToDo) {
//        case(1) : printf("Print the time");
//                    break;
//        case(2) : printf("Print the date");
//                    break;
//        case(3) : printf("Print the day");
//                    break;
//        case(4) : printf("Bye Bye");
//                    exit(0);
//                    break;
//    }
//
//
//    //fgets
//
//    char yourCity[30];
//    char thirdCity[] = "Paris";
//
//    printf("What city do you live in? ");
//
//    fgets(yourCity, 9, stdin);
//
//    printf("Hello %s\n", yourCity);
//
////    printf("Is your city Paris? %d\n\n", strcmp(yourCity, thirdCity));
//
//    char yourState[] = ", NY";
//
//    strcat(yourCity, yourState);
//
//    printf("You live in %s\n\n", yourCity);
//
//    printf("Letters in Paris : %d\n\n", strlen(thirdCity));
//
//    strlcpy(yourCity, "El Pueblo del la Reina de Los Angeles", sizeof(yourCity));
//
//    printf("New City is %s\n\n", yourCity);
//
//
//    int total = addTwoInts(2,4);
//    printf("The sum of 2 and 4 is %d\n\n", total);
//
//    //Local
//    int age = 10;
//
//    //Change global
//    globalVar = 50;
//
//    printf("age before a call to the function = %d\n\n", age);
//
//    printf("globalVar before a call to the function = %d\n\n", globalVar);
//
//    changeVariables();
//
//    printf("age after a call to the function = %d\n\n", age);
//
//    printf("globalVar after a call to the function = %d\n\n", globalVar);
//
//    int rand1 = 12, rand2 = 15;
//
//    printf("rand1 = %p : rand2 = %p\n\n", &rand1, &rand2);
//
//    printf("rand1 = %d : rand2 = %d\n\n", &rand1, &rand2);
//
//    printf("Size of int %d\n\n", sizeof(rand1));
//
//    int *pRand1 = &rand1;
//
//    printf("Pointer %p\n\n", pRand1);
//
//    printf("Pointer %d\n\n", pRand1);
//
//    //Defrencing a pointer
//    printf("Value: %d\n\n", *pRand1);
//
//    int primeNumbers[] = {2, 3, 5, 7};
//
//    printf("Second index : %d\n\n", primeNumbers[1]);
//
//    //Pointer Arithmetic
//    printf("Second index : %d\n\n", *(primeNumbers + 1));

//    char *students[4] = {"Sally", "Mark", "Paul", "Sue"};
////
////    for(int i = 0; i < 4; i++){
////        printf("%s : %d\n\n", students[i], &students[i]);
////    }

//    int rand3 =0, rand4 = 0;
//
//    printf("Main Before Function Call\n\n");
//
//    printf("rand3 = %d\n\n", rand3);
//    printf("rand4 = %d\n\n", rand4);
//
//    generateTwoRandomNums(&rand3, &rand4);
//
//    printf("Main After Function Call\n\n");
//
//    printf("rand3 = %d\n\n", rand3);
//    printf("rand4 = %d\n\n", rand4);
//
//
//    char randomMessage[] = "Edit my function";
//
//    printf("Old Message: %s\n\n", randomMessage);
//
//    editMessageSent(randomMessage, sizeof(randomMessage));
//
//    printf("New Message: %s\n\n", randomMessage);


//    //Structs in main
//    struct dog cujo = {"Cujo", "Saint Bernard", 90, 264};
//
////    getDogInfo(cujo);
//
//    struct dog cujo2 = cujo;
//
//    getMemoryLocations(cujo);
//
//    getMemoryLocations(cujo2);
//
//    dog benji = {"Benji", "Silk Terrier", 25, 9, {"Meat", "Joe Camp"}};
//
//    setDogWeightPtr(&benji, 11);
//
//    printf("Benji's weight in Main(): %d\n\n", benji.avgWeightLbs);
//
//
//    //Boolean
//    _Bool isANumber;
//
//    int number;
//    int sumOfNumbers = 0;
//
//    printf("Enter a Number: ");
//
//    isANumber = (scanf("%d", &number) == 1);
//
//
//    while(isANumber) {
//        sumOfNumbers = sumOfNumbers + number;
//        printf("Enter a Number: ");
//
//        isANumber = (scanf("%d", &number) == 1);
//    }
//
//    printf("The Sum is %d\n\n", sumOfNumbers);
//
//    //Char manipulation
//    char theChar;
//
//    while((theChar = getchar()) != '~'){
//
//        putchar(theChar);
//    }
//
//    char name[50];
//
//    printf("What is your name? ");
//
//    gets(name);
//
//    puts("Hi");
//    puts(name);
//
//    fgets(name, 50, stdin);
//
//    fputs("Hi ", stdout);
//    fputs(name, stdout);
//
//    char *randomString = "Just some random stuff";
//
//    while(*randomString){
//
//        putchar(*randomString++);
//    }
//
//    int i = 0;
//
//    while(randomString[i] != '\0') {
//        putchar(*randomString++);
//    }
//
//
//    char doYouWantToQuit[10];
//
//    printf("Enter quit to quit: ");
//
//    fgets(doYouWantToQuit, 10, stdin);
//
//    noMoreNewline(doYouWantToQuit);
//
//    makeLowercase(doYouWantToQuit);
//
//    while(strcmp(doYouWantToQuit, "quit")) {
//        printf("Enter quit to quit: ");
//
//        fgets(doYouWantToQuit, 10, stdin);
//
//        noMoreNewline(doYouWantToQuit);
//
//        makeLowercase(doYouWantToQuit);
//
//    }
//
//    printf("Thank you for typing quit %s\n\n", doYouWantToQuit);

//    getCharInfo();




    return 0;
}