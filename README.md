# C Programming Exercises Collection

This repository contains a comprehensive collection of C programming exercises, primarily based on "The C Programming Language" by Kernighan and Ritchie (K&R). The code demonstrates fundamental C programming concepts and problem-solving techniques.

<img width="250" height="300" alt="image" src="https://github.com/user-attachments/assets/a1291654-ddaa-457b-bb89-05dcd11ad7b2" />


## Overview

This collection includes solutions to various programming challenges covering:
- **Basic I/O Operations**
- **Temperature Conversion**
- **Character Processing**
- **String Manipulation** 
- **Bit Operations**
- **Syntax Checking**
- **Text Processing**

## Exercise Categories with Code Examples

### 1. Temperature Conversion Programs

#### Basic Fahrenheit to Celsius Table
```c
#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* lower limit */
    upper = 300;        /* upper limit */
    step = 20;          /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
```

#### For Loop Version
```c
#include <stdio.h>

int main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
```

#### Reverse Order (300 to 0)
```c
#include <stdio.h>

int main()
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
```

#### Using Symbolic Constants
```c
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
```

#### Function-based Temperature Conversion
```c
#include <stdio.h>

float F(float fh) {
    return(5.0f / 9.0f) * (fh - 32.0f);
}

int main() {
    float fh;
    int l = 0, u = 300, s = 20;

    printf("fh\tCelsius\n--------\n");

    for (fh = l; fh <= u; fh += s) {
        printf("%3.0f\t%6.1f\n", fh, F(fh));
    }

    return 0;
}
```

### 2. Character and Line Processing

#### Basic Character Copy
```c
#include <stdio.h>

int main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
```

#### Improved Character Copy with EOF Display
```c
#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
    printf("\nEOF %d\n", c);
    return 0;
}
```

#### Character Counter
```c
#include <stdio.h>

int main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}
```

#### Line Counter
```c
#include <stdio.h>

int main()
{
    int c, nl;
    
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
```

#### Count Newlines, Tabs, and Blanks
```c
#include <stdio.h>

int main()
{
    int c, nl, nt, nb;

    nl = 0;
    nt = 0;
    nb = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++nb;
    }
    printf("Newlines: %d, Tabs: %d, Blanks: %d\n", nl, nt, nb);

    return 0;
}
```

#### Replace Multiple Blanks with Single Blank
```c
#include <stdio.h>

int main()
{
    int c, l;
    l = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        } else if (l != ' ') {
            putchar(c);
        } 
        l = c;
    }

    return 0;
}
```

#### Make Tabs and Backspaces Visible
```c
#include <stdio.h>

int main(void)
{
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == '\t'){
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
           putchar(c);
        }
    }
    return 0;
}
```

### 3. Word and Character Frequency Analysis

#### Word Count Program
```c
#include <stdio.h> 

#define IN 1
#define OUT 0

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}
```

#### Print One Word Per Line
```c
#include <stdio.h> 

#define IN 1
#define OUT 0

int main()
{
    int c, state;
    
    state = OUT;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else {
            if (state == OUT) {
                state = IN;
            }
            putchar(c);
        }
    }
    
    return 0;
}
```

#### Digit Frequency Counter
```c
#include <stdio.h>

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
    return 0;
}
```

### 4. String Processing and Line Operations

#### Find Longest Line
```c
#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
```

#### Print Lines Longer Than 80 Characters (Exercise 1-17)
```c
#include <stdio.h>
#define M 1000

int g(char l[], int m);

int main()
{
    int L;
    int total_len;
    char l[M];

    while ((L = g(l, M)) > 0) {
        total_len = L;

        if (l[L - 1] != '\n') {
            int c;
            while ((c = getchar()) != EOF && c != '\n')
                ++total_len;
            if (c == '\n')
                ++total_len;
        }

        if (total_len > 80)
            printf("%s", l);
    }

    return 0;
}

int g(char s[], int lm)
{
    int c, i;

    for (i = 0; i < lm - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
```

#### Remove Trailing Blanks and Tabs (Exercise 1-18)
```c
#include <stdio.h>
#define M 1000

int g(char l[], int m);
void t(char l[]);

int main()
{
    char l[M];

    while (g(l, M) > 0) {
        t(l);
        
        int i = 0;
        while (l[i] == ' ' || l[i] == '\t' || l[i] == '\n')
            ++i;
            
        if(l[i] != '\0')
            printf("%s", l);
    }
    
    return 0;
}

int g(char s[], int lm)
{
    int c, i;

    for (i = 0; i < lm -1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';
    return i;
}

void t(char l[])
{
    int i = 0;
    while (l[i] != '\0')
        ++i;
        
    while (i > 0 && (l[i - 1] == ' ' || l[i - 1] == '\t' || l[i - 1] == '\n'))
        --i;
        
    l[i++] = '\n';
    l[i] = '\0';
}
```

#### Reverse Each Line (Exercise 1-19)
```c
#include <stdio.h>
#define M 1000

int g(char l[], int m);
void r(char s[]);

int main()
{
    char l[M];
    
    while(g(l, M) > 0) {
        r(l);
        printf("%s", l);
    }
    
    return 0;
}

int g(char s[], int lm)
{
    int c, i;
    
    for(i = 0; i < lm - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';
    return i;
}

void r(char s[])
{
    int i = 0;
    while(s[i] != '\0' && s[i] != '\n')
        ++i;
        
    int j = 0;
    int e = i - 1;
    char tp;
    
    while (j < e) {
        tp = s[j];
        s[j] = s[e];
        s[e] = tp;
        ++j;
        --e;
    }
}
```

### 5. Advanced Text Processing Tools

#### Detab - Replace Tabs with Spaces (Exercise 1-20)
```c
#include <stdio.h>

int main(void) {
    int c, C = 0;
    int T = 8;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            int s = T - (C % T);
            for (int i = 0; i < s; i++) {
                putchar(' ');
                C++;
            }
        } else { 
            putchar(c);
            C++;
            if (c == '\n') C = 0;
        }
    }
    return 0;
}
```

#### Entab - Replace Spaces with Tabs (Exercise 1-21)
```c
#include <stdio.h>

int main(void) {
    int c, C = 0, s = 0;
    int T = 8;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            s++;
            C++;
            if (C % T == 0) {
                putchar('\t');
                s = 0;
            }
        } else {
            while (s > 0) {
                putchar(' ');
                s--;
            }
            putchar(c);

            if (c == '\n') {
                C = 0;
            } else if (c == '\t') {
                C += T - (C % T);
            } else {
                C++;
            }
        }
    }
    while (s > 0) {
        putchar(' ');
        s--;
    }
    return 0;
}
```

#### Fold Long Lines (Exercise 1-22)
```c
#include <stdio.h>

int main(void) {
    int c;
    int m = 20;
    int C = 0;
    int l = -1;
    int b[1000];
    int bp = 0;

    while ((c = getchar()) != EOF) {
        b[bp++] = c;
        C++;

        if (c == ' ' || c == '\t') {
            l = bp - 1;
        }
        if (C == m) {
            if (l >= 0) {
                for (int i = 0; i < l; i++)
                    putchar(b[i]);
                putchar('\n');

                int nl = bp - l - 1;
                for (int i = 0; i < nl; i++)
                    b[i] = b[l + 1 + i];

                bp = nl;
                C = bp;
                l = -1;

                for (int i = 0; i < bp; i++)
                    if (b[i] == ' ' || b[i] == '\t')
                        l = i;
            } else {
                for (int i = 0; i < bp; i++)
                    putchar(b[i]);
                putchar('\n');
                bp = 0;
                C = 0;
                l = -1;
            }
        }

        if (c == '\n') {
            for (int i = 0; i < bp; i++)
                putchar(b[i]);
            bp = 0;
            C = 0;
            l = -1;
        }
    }

    for (int i = 0; i < bp; i++)
        putchar(b[i]);

    return 0;
}
```

#### Remove C Comments (Exercise 1-23)
```c
#include <stdio.h>

int main(void) {
    int c, n;
    int is = 0, ic = 0, isc = 0, imc = 0;

    while ((c = getchar()) != EOF) {
        if (isc) {
            if (c == '\n') {
                isc = 0;
                putchar(c);
            }
            continue;
        }

        if (imc) {
            if (c == '*' && (n = getchar()) == '/') {
                imc = 0;
            } else if (c == '*' && n != '/') {
                ungetc(n, stdin);
            }
            continue;
        }

        if (is) {
            putchar(c);
            if (c == '\\') {
                c = getchar();
                putchar(c);
            } else if (c == '"') {
                is = 0;
            }
            continue;
        }

        if (ic) {
            putchar(c);
            if (c == '\\') {
                c = getchar();
                putchar(c);
            } else if (c == '\'') {
                ic = 0;
            }
            continue;
        }
        
        if (c == '"') {
            is = 1;
            putchar(c);
        } else if (c == '\'') {
            ic = 1;
            putchar(c);
        } else if (c == '/') {
            n = getchar();
            if (n == '/') {
                isc = 1;
            } else if ( n == '*') {
                imc = 1;
            } else {
                putchar(c);
                ungetc(n, stdin);
            }
        } else {
            putchar(c);
        }
    }

    return 0;
}
```

#### C Syntax Checker (Exercise 1-24)
```c
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *it;
    int t;
    int cap;
} stk;

void ini(stk *s, int cap) {
    s->it = malloc(cap);
    if (!s->it) {
        fprintf(stderr, "Mem alloc fail\n");
        exit(1);
    }
    s->t = 0;
    s->cap = cap;
}

void fre(stk *s) {
    free(s->it);
    s->it = NULL;
    s->t = 0;
    s->cap = 0;
}

void psh(stk *s, char c) {
    if (s->t >= s->cap) {
        fprintf(stderr, "Stack overflow\n");
        exit(1);
    }
    s->it[s->t++] = c;
}

char pop(stk *s) {
    if (s->t == 0) return 0;
    return s->it[--s->t];
}

char pek(stk *s) {
    if (s->t == 0) return 0;
    return s->it[s->t - 1];
}

int io(char c) { return c == '(' || c == '[' || c == '{'; }
int ic(char c) { return c == ')' || c == ']' || c == '}'; }

int mt(char o, char cl) {
    return (o == '(' && cl == ')') ||
           (o == '[' && cl == ']') ||
           (o == '{' && cl == '}');
}

int main(void) {
    const int sz = 2048;
    stk s;
    ini(&s, sz);

    int c, p = 0;
    int sq = 0, dq = 0, sl = 0, ml = 0;

    while ((c = getchar()) != EOF) {
        if (sl) {
            if (c == '\n') sl = 0;
            p = c;
            continue;
        }

        if (ml) {
            if (p == '*' && c == '/') ml = 0;
            p = c;
            continue;
        }

        if (!sq && !dq) {
            if (p == '/' && c == '/') {
                sl = 1;
                p = 0;
                continue;
            } else if (p == '/' && c == '*') {
                ml = 1;
                p = 0;
                continue;
            }
        }

        if (sq) {
            if (c == '\'' && p != '\\') sq = 0;
            p = c;
            continue;
        }

        if (dq) {
            if (c == '"' && p != '\\') dq = 0;
            p = c;
            continue;
        }

        if (!sq && !dq && !sl && !ml) {
            if (c == '\'') {
                sq = 1;
            } else if (c == '"') {
                dq = 1;
            } else if (io(c)) {
                psh(&s, c);
            } else if (ic(c)) {
                char o = pop(&s);
                if (!mt(o, c)) {
                    fprintf(stderr, "Syntax err: unmatched '%c' for '%c'\n", c, o);
                    fre(&s);
                    return 1;
                }
            }
        }

        p = c;
    }

    if (sq) {
        fprintf(stderr, "Syntax err: unclosed single quote\n");
        fre(&s);
        return 1;
    }
    if (dq) {
        fprintf(stderr, "Syntax err: unclosed double quote\n");
        fre(&s);
        return 1;
    }
    if (ml) {
        fprintf(stderr, "Syntax err: unclosed multi-line comment\n");
        fre(&s);
        return 1;
    }
    if (s.t != 0) {
        fprintf(stderr, "Syntax err: unclosed '%c'\n", pek(&s));
        fre(&s);
        return 1;
    }

    fre(&s);
    printf("No rudimentary syntax errors found.\n");
    return 0;
}
```

### 6. Data Types and Limits (Chapter 2)

#### Data Type Ranges
```c
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Declared variables
    int im, IM;
    unsigned int um;
    long lm, LM;
    unsigned long ulm;

    // Assign computed values
    im = (int)(0 - (1U << 31));
    IM = (int)((1U << 31) - 1);
    um = ~0U;

    lm = (long)(0UL - (1UL << (sizeof(long) * 8 - 1)));
    LM = (long)((1UL << (sizeof(long) * 8 - 1)) - 1);
    ulm = ~0UL;

    // STANDARD
    printf("=== Integer Ranges (Standard) ===\n");
    printf("signed char      : [%d, %d]\n", SCHAR_MIN, SCHAR_MAX); 
    printf("unsigned char    : [0, %u]\n", UCHAR_MAX);
    printf("signed short     : [%d, %d]\n", SHRT_MIN, SHRT_MAX); 
    printf("unsigned short   : [0, %u]\n", USHRT_MAX);
    printf("signed int       : [%d, %d]\n", INT_MIN, INT_MAX);
    printf("unsigned int     : [0, %u]\n", UINT_MAX);
    printf("signed long      : [%ld, %ld]\n", LONG_MIN, LONG_MAX);
    printf("unsigned long    : [0, %lu]\n", ULONG_MAX);

    // COMPUTED
    printf("\n=== Integer Ranges (Computed) ===\n");
    printf("signed char      : [%d, %d]\n", -(1 << 7), (1 << 7) - 1); 
    printf("unsigned char    : [0, %u]\n", (1U << 8) - 1);
    printf("signed short     : [%d, %d]\n", -(1 << 15), (1 << 15) - 1); 
    printf("unsigned short   : [0, %u]\n", (1U << 16) - 1);
    printf("signed int       : [%d, %d]\n", im, IM);
    printf("unsigned int     : [0, %u]\n", um);
    printf("signed long      : [%ld, %ld]\n", lm, LM);
    printf("unsigned long    : [0, %lu]\n", ulm);

    // Floating point ranges
    printf("\n=== Floating Point Ranges ===\n");
    printf("float            : [%e, %e]\n", FLT_MIN, FLT_MAX);
    printf("double           : [%e, %e]\n", DBL_MIN, DBL_MAX);
    printf("long double      : [%Le, %Le]\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
```

### 7. Number Base Conversion

#### Hexadecimal to Integer Converter (Exercise 2-3)
```c
#include <stdio.h>
#include <ctype.h>

unsigned long htoi(const char *s) {
    unsigned long result = 0;
    int i = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }
    
    for (; s[i] != '\0'; i++) {
        char c = s[i];
        int value;

        if (c >= '0' && c <= '9') {
            value = c - '0';
        } else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        } else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        } else {
            break;
        }
        result = result * 16 + value;
    }
    return result;
}

int main() {
    char input[100];

    printf("Enter hex number (with or without 0x/0X prefix): ");
    if (fgets(input, sizeof(input), stdin)) {
        size_t len = 0;
        while(input[len] != '\0') {
            if(input[len] == '\n') {
                input[len] = '\0';
                break;
            }
            len++;
        }
        unsigned long value = htoi(input);
        printf("Integer Value: %lu\n", value);
    } else {
        printf("Error reading input\n");
    }

    return 0;
}
```

### 8. Bit Manipulation Functions

#### Set Bits Function (Exercise 2-6)
```c
#include <stdio.h>

unsigned setbits(unsigned x, unsigned p, int n, int y) {
    unsigned mask = (1 << n) - 1;
    unsigned y_bits = y & mask;
    unsigned y_shifted = y_bits << (p + 1 - n);
    unsigned clear_mask = ~(mask << (p + 1 - n));
    return (x & clear_mask) | y_shifted;
}

int main() {
    unsigned x = 170;
    unsigned y = 240;
    int p = 5;
    int n = 3;
    
    unsigned result = setbits(x, p, n, y);
    
    printf("Result: %u\n", result);

    return 0;
}
```

#### Invert Bits Function (Exercise 2-7)
```c
#include <stdio.h>

unsigned invert(unsigned x, int p, int n) {
    unsigned mask = ((1 << n) - 1) << (p + 1 - n);
    return x ^ mask;
}

int main() {
    unsigned x = 170;
    int p = 5;
    int n = 3;
    
    unsigned result = invert(x, p, n);
    
    printf("Original x: %u\n", x);
    printf("After inversion of %d bits at pos %d: %u\n", n, p, result);

    return 0;
}
```

#### Right Rotate Function (Exercise 2-8)
```c
#include <stdio.h>

unsigned rightrot(unsigned x, int n) {
    int word_size = sizeof(unsigned) * 8;
    n = n % word_size;
    return (x >> n) | (x << (word_size - n));
}

int main() {
    unsigned x = 170;
    int n = 3;
    
    unsigned result = rightrot(x, n);
    printf("Original x: %u\n", x);
    printf("x rotated right by %d bits: %u\n", n, result);
    
    return 0;
}


```
#### Bit_Count (Exercise 2-9)
```c

#include <stdio.h>

/* Impropve Dennis x &= (x - 1) CODE*/

int main(void) {
    
int bit_count(unsigned int x) {
    int c = 0;
    while (x) c++, x &= x - 1;
    return c;
    }
}
```
#### tolower program with condtional expression (Exercise 2-10)
```c
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int ch;
    
    for (ch = 0; ch <= 0x7f; ch++)
    {
        char lower = (ch >= 'A' && ch <= 'Z') ? (ch + ('a' - 'A')) : ch;
        
        printf("char=%c tolower=%#04x\n",
        (ch >= 32 && ch <= 126) ? ch : '.',
        lower);
    }
    
    char str[] = "HELLOW WORLD";
    
    for (int i = 0; str[i]; i++)
    {
        char lower = (str[i] >= 'A' && str[i] <= 'Z') ? (str[i] + ('a' - 'A' )) : str[i];
    
        putchar(lower);
    }
    
    putchar('\n');
    return 0;
}
```
### Question & Exercise 3-1
 
<p>Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time.</p>


```c
int binarysearch(int x, int v[], int n) {

    int l = 0, h = n - 1, m;

    while (l < h) {
        m = (l + h) / 2;
        if (x <= v[m])
            h = m;
        else
            l = m + 1;

    }
 return (l < n && v[l] == x) ? l : -1;
}
```
### Question & Exercise 3-2

<p>write a function escape (s,t) that converts chars like newline and tab into visable escape sequences like \n and \t as it copies the string to t to s use a switch write a function for other directions as well convertng escape sequqnces into real charecters</p>

```c
#include <stdio.h>

void escape(char s[], char t[]) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            case '\\':
                t[j++] = '\\';
                t[j++] = '\\';
                break;
            default:
                t[j++] = s[i];
                break;
            }
        }
        t[j] = '\0';
}

void unescape(char s[], char t[]) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] == '\\') {
            switch (s[++i]) {
                case 'n':  t[j++] = '\n'; break;
                case 't':  t[j++] = '\t'; break;
                case '\\': t[j++] = '\\'; break;
                default:
                    // Copy literally if unknown sequence
                    t[j++] = '\\';
                    t[j++] = s[i];
                    break;
            }
        } else {
            t[j++] = s[i];
        }
    }
    t[j] = '\0';
}

int main() {
    char original[] = "Hello\tWorld!\nNew line here.";
    char escaped[200];
    char unescaped[200];

    escape(original, escaped);
    printf("Original:\n%s\n", original);
    printf("Escaped:\n%s\n", escaped);

    unescape(escaped, unescaped);
    printf("Unescaped:\n%s\n", unescaped);

    return 0;
}
```
### Question 3.3
<p>Write a function expand(s1,s2) that expands shorthand notations a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and z0-9 and -a-z Arrange that a leading or trailing - is taken litterally</p>



```c
### 9. Power Function Examples

#### Basic Power Function
```c
#include <stdio.h>

int power(int m, int n);

int main()
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    
    return 0;
}

int power(int base, int n)    
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}
```

## Key Programming Concepts Demonstrated

### Basic Concepts
- Variables and data types
- Control structures (loops, conditionals)
- Functions and parameter passing
- Arrays and strings
- Standard I/O operations

### Intermediate Concepts
- Pointer manipulation
- Dynamic memory considerations
- String processing algorithms
- File I/O operations
- Error handling

### Advanced Concepts
- Bit manipulation and bitwise operations
- State machines for parsing
- Stack-based algorithms
- Text processing and parsing
- Syntax analysis

## Compilation and Usage

Most programs can be compiled with standard C compilers:

```bash
gcc -o program_name source_file.c
./program_name
```

### Example Usage

**Temperature Conversion:**
```bash
gcc -o temp_convert temp_conversion.c
./temp_convert
```

**Text Processing:**
```bash
gcc -o detab detab.c
./detab < input.txt > output.txt
```

**Syntax Checker:**
```bash
gcc -o syntax_check syntax_checker.c
./syntax_check < source_code.c
```

## Educational Value

This collection serves as:
- **Learning Resource**: Step-by-step progression through C fundamentals
- **Reference Material**: Common algorithms and patterns in C
- **Practice Problems**: Hands-on exercises for skill development
- **Code Examples**: Real-world applications of C programming concepts

## Technical Notes

- All programs are written in standard C
- Compatible with most C compilers (gcc, clang, etc.)
- Follows K&R C programming style and conventions
- Includes both basic and optimized versions of algorithms
- Demonstrates proper error handling and edge case management

## Exercise Organization

The exercises are organized by chapter and difficulty:

### Chapter 1 Exercises
- **1-1 to 1-8**: Temperature conversion variations
- **1-9 to 1-12**: Character processing fundamentals
- **1-13 to 1-16**: Word and character analysis
- **1-17**: Print lines longer than 80 characters
- **1-18**: Remove trailing blanks and tabs
- **1-19**: Reverse each input line
- **1-20**: Detab program
- **1-21**: Entab program
- **1-22**: Line folding
- **1-23**: Comment removal
- **1-24**: Syntax checking

### Chapter 2 Exercises
- **2-1**: Data type ranges
- **2-2**: Alternative for loop syntax
- **2-3**: Hexadecimal conversion
- **2-6**: Bit manipulation - setbits
- **2-7**: Bit manipulation - invert
- **2-8**: Bit manipulation - rightrot

## Notable Features

### Robust Input Handling
- Safe string operations with bounds checking
- EOF handling for reliable input processing
- Proper memory management techniques

### Optimized Code Examples
- Compact variable naming for efficiency
- Minimized function calls
- Efficient algorithms for common operations

### Real-World Applications
- Text editor functionality (tab handling, line folding)
- Code analysis tools (comment removal, syntax checking)
- Data conversion utilities
- String processing libraries

## Code Style and Conventions

This collection follows several coding styles:

1. **K&R Original Style**: Traditional formatting from the book
2. **Optimized Versions**: Compact variable names (e.g., `g()` for getline, `c()` for copy)
3. **Educational Comments**: Detailed explanations for learning purposes

## Common Patterns

### Input Processing Pattern
```c
while ((c = getchar()) != EOF) {
    // Process character
}
```

### Line Reading Pattern
```c
for (i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
```

### State Machine Pattern
```c
#define IN 1
#define OUT 0

int state = OUT;
// Process based on current state
```

## Advanced Features Demonstrated

### String Manipulation
- Dynamic string length handling
- In-place string modifications
- String reversal algorithms
- Whitespace processing

### Text Processing
- Comment parsing with state machines
- Quote handling in parsers
- Multi-character delimiter recognition
- Line folding with word boundaries

### Bit Operations
- Mask creation and application
- Bit field extraction and insertion
- Bitwise rotation operations
- Two's complement arithmetic

### Memory Management
- Stack-based data structures
- Dynamic allocation patterns
- Buffer overflow prevention
- Resource cleanup

## Future Enhancements

Potential areas for expansion:
- Additional data structure implementations
- More advanced string processing algorithms
- File handling examples
- Network programming basics
- System programming concepts

## Learning Path

Recommended order for studying these exercises:

1. **Basic I/O**: Start with temperature conversion and character copy
2. **Character Processing**: Move to counting and analysis programs
3. **String Operations**: Learn line processing and manipulation
4. **Advanced Text**: Master comment removal and syntax checking
5. **Bit Manipulation**: Explore low-level operations
6. **Data Types**: Understand system limits and representations

## Common Pitfalls and Solutions

### Buffer Overflow Prevention
```c
for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
```

### Proper EOF Handling
```c
while ((c = getchar()) != EOF) {
    // Always check for EOF in loops
}
```

### String Termination
```c
s[i] = '\0';  // Always null-terminate strings
```

## Testing and Validation

Each program can be tested with various inputs:

### Temperature Conversion
- Test with extreme values (0, 32, 100, 212°F)
- Verify mathematical accuracy

### Text Processing
- Test with empty files
- Test with very long lines
- Test with special characters

### Bit Manipulation
- Test with boundary values (0, maximum unsigned)
- Verify bit patterns with binary representation

---

*This collection represents a comprehensive journey through fundamental C programming concepts, suitable for beginners learning the language and experienced programmers reviewing core concepts. Each exercise builds upon previous knowledge while introducing new techniques and problem-solving approaches.*
