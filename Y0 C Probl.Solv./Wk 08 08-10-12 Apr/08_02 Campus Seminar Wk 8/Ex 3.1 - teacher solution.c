int main(){
    char str[] = "Coding";
    int i=0;

    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    return 0;
    // The above code prints the string "Coding" character by character.
    // The while loop continues until the null terminator '\0' is encountered.
    // The output will be:
    // C
    // o
    // d
    // i
    // n
    // g
    // The null terminator is not printed because the loop stops before it.
    // The code demonstrates how to iterate through a string using a while loop.
    // The output will be:
    // C
    // o
    // d
    // i
    // n
    // g
    // The null terminator is not printed because the loop stops before it.
}