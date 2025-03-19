#include <stdio.h>
#include <stdbool.h>

int pm_str_len(char *str)
{
    int len = 0;
    while (*str != '\0') 
    {
        len++;  
        str++;  
    }
    return len;
}

bool pm_str_cmp(const char *a, const char *b)
{   if (a == NULL || b == NULL) return false;
    int i = 0;
    while (a[i] != '\0'){
        if (b[1] == '\0') return false;
        if (a[i] != b[i]) return false;
        i++;
    }
    if ( a[i] == b[i]) return true;
    return false;
    
}

void pm_str_capitalize(char *stri)
{
    while (*stri != '\0')
    {
        if (*stri >= 'a' && *stri <= 'z')
        {
            *stri = *stri - 32;
        }
        stri++;
    }
}

int pn_str_len(char *str2)
{
    int len = 0;
    while (*str2 != '\0')
    {
        len++;
        str2++;
    }
    return len;
}
int pn_str_len3(char *str3)
{
    int len = 0;
    while (*str3 != '\0')
    {
        len++;
        str3++;
    }
    return len;
}

void pm_str_trim(char *str2){
 int i = pm_str_len(str2)- 1;
 for(i; str2[i] == ' '; i--){
     str2[i] = '\0';
 }
 int j = 0;
 for(j; str2[j] == ' '; j++);
 int k = j;
 for(k; str2[k] != '\0'; k++){
     str2[k-j] = str2[k];
 }
 str2[k -j] ='\0';
}
int pn_str_rev(char *str3)
{
    int len = pn_str_len(str3);
    for (int i = 0; i < pn_str_len(str3) / 2; i++)
    {
        char temp = str3[i];
        str3[i] = str3[len - i - 1];
        str3[len - i - 1] = temp;
    }
    return 0;
}
int main()
{
    char str2[] = "   Example string   ";
    pm_str_trim(str2);
    printf("Trimmed string:%s\n", str2);
    char str[] = "Example string"; 
    printf("Length of string: %d \n", pm_str_len(str));  
    
    char a[] = "string";
    char b[] = "string";
    if(pm_str_cmp(a, b))  
    {
        printf("Strings are the same\n");
    }
    else
    {
        printf("Strings are different\n");
    } 
    char stri[] = "Capitalized string";
    pm_str_capitalize(stri);
    printf("Capitalized string: %s\n", stri);

   
    char str3[] = "Example string";
    printf("reversed string: %d \n", pn_str_rev(str3));
    

} 

