%{
    int vowel_count=0;
    int consonant_count =0;
%}
  
%%
[\t\n]+
[aeiouAEIOU]+ {vowel_count++;}
[^aeiouAEIOU] {consonant_count++;}
%%

int yywrap()
{
return 1;
}
int main()
{
    printf("Enter the string of vowels and consonents:");
    yylex();
    printf("Number of vowels are:  %d\n", vowel_count);
    printf("Number of consonants are:  %d\n", consonant_count);
    return 0;
}

