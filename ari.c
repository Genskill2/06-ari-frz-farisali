string ari(string);
string ari(string s)
{
int character=0;
int words=0;
int sentence=0;
int ari;
char* gradelevel[14]={"Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor");
for(int=0; i<strlen(s); i++)
{
if(isalnum(s[i]))
{
character++;
}
else if(s[i]==' ')
{
words++;
}
else if(s[i]=='.'||s[i]=='?'||s[i]=='!')
{
sentence++;
}
ari=4.71*((float)character/words)+0.5*((float)words/sentence)-21.43;
}
return gradelevel[ari];
}
