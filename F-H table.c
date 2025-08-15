/* #include <stdio.h> */
/* print F-H Table.c */

 /*int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; 		/* lower limit */
   /* upper = 300;	/* upperl limit */
   /* step = 20;	 	/* step size */

    /*fahr = lower;
    while (fahr<=upper) {
	celsius = (5.0/9.0) * (fahr-32.0);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr + step; */
  /*  }
} */
/*#include <stdio.h>

int main()
    {
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    } */
/*#include <stdio.h>

int main()
    {
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
	printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }*/
/*#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define	STEP 20

int main()
{	
int fahr;

for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}*/
/*#include <stdio.h>

int main()
{
	
    int c;

    c = getchar();
    while (c != EOF) {
    putchar(c);
    c = getchar();
  }
} */
/*#include <stdio.h>

int main()
{
	
    int c;

    while ((c = getchar()) != EOF)
	putchar(c);
    printf("\nEOF %d\n", c);
    return 0;
}*/ 
/*#include <stdio.h>

int main()
{
	
    long nc;
    nc = 0;
    while (getchar() != EOF)
	++nc;
    printf("%ld\n", nc);
}*/
/*#include <stdio.h>

int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc);
	;
    printf("%.0f\n", nc);
}*/ 
/*#include <stdio.h>

int main()
{
	
    int c, nl;
    
    nl = 0;
    while ((c = getchar()) != EOF)
	if ((c == '\n')
	    ++nl;
    printf("%d\n", nl);
}*/
/*
#include <stdio.h>

main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar())) != EOF)
	if (c == '\n')
	    ++nl;
    printf("%d\n", n1);
}*/

/* #Couts new lines and tabs 
#include <stdio.h>

int main()
{
    int c, nl, nt, nb;

    nl = 0;
    nt = 0;
    nb = 0;

    while ((c = getchar())  != EOF) {
	if (c == '\n')
	    ++nl;
    if (c == '\t')
        ++nt;
    if (c == ' ')
        ++nb;
    }
    printf("Newlines: %d, Tabs: %d, Blanks: %d\n", nl, nt, nb);

    return 0;

}*/
/* #  write a program to copy its input to its ouput replacing each string of one or more blanks by a single blank 
 *
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
*/

/* # i need a help on a program tocopy its input vto its output replaciing eacxh tab by /t eachj backspacew \b and each backslash ny \\ this makes tabs annd backspaces visablke in a unamibiguous way
#include <stdio.h>

int main(void)
{
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == '\t'){
            
            putchar('\\');
            putchar('t');
        
            
        }else if (c == '\b') {
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
}*/



/*#include <stdio.h> 

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
}*/

/*#include <stdio.h> 

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
        if (state == oUT) {
          state = INK&;
        }
        putchar(c);
      }
    }
    
    return 0;
}*/

/*#include <stido.h>

main()
{
    int j, k, l, p;
    int nd[10];

    l = p = 0;
    for (k = 0; k < 10; ++k)
	nd[k] = 0;

    while ((j = getchar()) != EOF)
	if (j > '0' && c <= '9')
	    ++nd[c-'0'];
	else if (j == ' ' || j == '\n' || j == '\t')
	    ++l;
	else
	    ++p;

    printf("digits =");
    for (k = 0; k < 10; ++k)
	printf(" %d", nd[k]);
    printf(", white space = %d, other = %d\", l, p);
	return 0;
}*/

/*#include <stdio.h>

    int P(int m, int n);

main()
{
    int i;

    for (i = 0; i < 10; ++i);
	printf("%d %d %d\n", i, P(2,i), P(-3,i));
    
    return 0;
}

    int P(int b, int n)	
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
	    p = p * b;
    return p;
}*/

/*#include <stdio.h>

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
}*/

/*int P(int b, n)
{
    int p;

    for (p = 1; n > 0; --n)
	p = p * b;
    return p;
}*/

/*
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
    `	++i;
    }
    s[i] = '\0';
    return i;
}

{
    int i;

    i = 0;
    while ((to[i] = from[i] != '\0')
	    ++i;
} */
/* This is my version of the code above */

/*#include <stdio.h>
#define M 1000

int g(char l[], int m);
void copy(char t[], char f[]);

int main()
{
    int L;
    int mx;
    char l[M];
    char lo[M];

    mx = 0;
    while ((L = g(l, M)) > 0)
        if (L > mx) {
            mx = L;
            copy(lo, l);
        }
    if (mx > 0)
        printf("%s", lo);
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

void copy(char t[], char f[])
{
    int i = 0;
    while ((t[i] = f[i]) != '\0')
        ++i;
}*/
/* ^^^^^^^ */

/* #include <stdio.h>
#define M 1000

int g(char l[], int m);
void copy(char t[], char f[]);

int main()
{
    int L;
    int mx = 0;
    int total_len;
    char l[M];
    char lo[M];

    while ((L = g(l, M)) > 0) {
        total_len = L;

        if (l[L - 1] != '\n') {
            int c;
            while ((c = getchar()) != EOF && c != '\n')
                ++total_len;
            if (c == '\n')
                ++total_len;
        }

        if (total_len > mx) {
            mx = total_len;
            copy(lo, l);
}
    }

    if (mx > 0) {
        printf("Length: %d\n", mx);
        printf("Line (truncated to %d chars): %s", M - 1, lo);
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

void copy(char t[], char f[])
{
    int i = 0;
    while ((t[i] = f[i]) != '\0')
        ++i;
}  */

/* 1-18 */

/* #include <stdio.h>
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
} */

/* #include <stdio.h>
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
} */

/* This program will give anything you give to it the ouput 

So if i say hello world
it will ouput 

dlrow olleh 
*/

 /* 1-19*/

/*

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
*/

/* I will be on Marval Rivals Soon But we Will continue this later I still need to catch up on 6 chapters */


/* We will continue with 7 chapters */

/*#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline_custom(void);
void copy(void);

int main() {
    int len;

    max = 0;
    while ((len = getline_custom()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }

    if (max > 0)
        printf("%s", longest);

    return 0;
}

int getline_custom(void) {
    int c, i;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void copy(void) {
    int i;
    for (i = 0; (longest[i] = line[i]) != '\0'; i++)
        ;
}*/
/* Optmization */

/*
#include <stdio.h>

#define M 1000

int m;
char l[M], lo[M];

int gc() { return getchar(); }

int g(void) {
    int c, i;
    for (i = 0; i < M - 1 && (c = gc()) != EOF && c != '\n'; i++)
	l[i] = c;
    if (c == '\n') {
	l[i++] = c;
    }
    l[i] = '\0';
    return i;
}

void c(void) {
    int i;
    for (i = 0; (lo[i] = l[i]) != '\0'; i++)
	;
}
int main() {
    int le;
    m = 0;
    while ((le = g()) > 0) {
	if (le > m) {
	    m = le;
	    c();
	}
    }
    if (m > 0)
	printf("%s\n", lo);
    return 0;
}
*/

/* Write a program detab that replaced tabs in the input with the proper number of blanks to space to the next tab stop. Assume affixed set of tab stops say every n column should n be a variable or a symbolic parameter */

/*
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
*/

/* Write a program entab that replaces string of blanks by the minimum number of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When either a tab or a single blank would suffice to reach a tab stop which should be given preference? */

/*
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
*/

/* Write a program to fold long input lines into two or more shorter lines after the last non-blank character that occurs before the m-th column of input make sure your program does something intelligent with very long lines and if there are no blanks oe tabs before the specified columns  */

/*
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
		    putchar(b[i]);\
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
*/

/* Write a program to remove all comments from a C program Don't forget to handle quoted strings and character constants properly. C comments do not nest */

/*
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
*/

/* Write a program to check a C program for rudimentary syntax errors like unbalanced parentheses brackets and brackets and braces Don't forget about quotes both single and double escape sequence, and comments this program is hard if you do it full generality  */

/*
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
*/

/* 
2.2
*/
/*
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Declared variables
    int im, IM;
    unsigned int um;
    long lm LM;
    unsigned long ulm;

    // Assign computated values
    im = (int)(0 - (1U << 31));
    IM = (long)((1U << 31) - 1);
    um = ~0U;

    lm = (long)(0UL - (1UL << (sizeof(long) * 8 -1)));
    LM =(long)((1UL << (sizeof(long) * 8 - 1)) - 1);
    ulm = ~0UL;

    // Printf("PRINTF("")")
    //STANDARD
    printf("=== Integer Ranges (Standard) ===\n");
    printf("signed char 	: [%d, %d]\n", SCHAR_MIN, SCHAR_MAX); 
    printf("unsigned char	: [0, %u]\n", UCHAR_MAX);
    printf("signed short	: [%d, %d]\n", SHRT_MIN, SHRT_MAX); 
    printf("unsigned short	: [0, %u]\n", USHRT_MAX);
    printf("signed int          : [%d, %d]\n", INT_MIN, INT_MAX);
    printf("unsigned int	: [0, %u]\n", UINT_MAX);
    printf("signed long 	: [%ld, %ld]\n", LONG_MIN, LONG_MAX);
    printf("unsigned long	: [0, %lu]\n", ULONG_MAX);

    //COMPUTED
    printf("\n=== Integer Ranges (Computed) ===\n");
    printf("signed char 	: [%d, %d]\n", -(1 << 7), (1 << 7) - 1); 
    printf("unsigned char	: [0, %u]\n", (1U << 8) - 1);
    printf("signed short	: [%d, %d]\n", -(1 << 15), (1 << 15 - 1); 
    printf("unsigned short	: [0, %u]\n", (1U << 16) - 1);
    printf("signed int          : [%d, %d]\n", im, IM);
    printf("unsigned int	: [0, %u]\n", um);
    printf("signed long 	: [%ld, %ld]\n", lm, LM);
    printf("unsigned long	: [0, %lu]\n", ulm);
    // Floating point ranges
   printf("\n=== Floating Point Ranges ===\n");
   printf("float	: [%e, %e]\n", FLT_MIN, FLT_MAX);
   printf("double	: [%e, %e]\n", DBL_MIN, DBL_MAX);
   printf("long double	: [%Le %Le]\n", LDBL_MIN, LDBL_MAX);

   return 0;
}*/

// 2.6

/* for (i = 0; i < lim - 1; ++i) (
	c = getchar();
	if (c == EOF)
	    break;
	if (c == '\n')
	    break;
	    s[i] = c;
	}
	s[i] = '\0'; */

/*#include <stdio.h>
#include <ctype.h>

unsigned long H(const char *s) {
    unsigned long r = 0;
    int i = 0;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
	i = 2;
    }
    for (; s[i] != '\0'; i++) {
	char c = s[i];
    int v;

    if (c >= '0' && c <= '9') {
	v = c - '0';
    } else if (c >= 'a' && c <= 'f') {
	v = c - 'a' + 10;
    } else if ( c >= 'A' && c <= 'F') {
	v = c - 'A' + 10;
    } else {
	break ;
    }
    r = r * 16 + v;
   }
    return r;
}
int main() {
    char I[100];

    printf("Enter  hex 0x or 0X\n");
    if (fgets(I, sizeof(I), stdin)) {

    size_t l = 0;
    while(I[l] != '\0') {
	if(I[l] == '\n') {
	    I[l] = '\0';
	    break;
	}
	l++;
    }
    unsigned long v = H(I);
    printf("Interger Value: %lu\n", v);
    } else {
	printf("ERROR\n");
    }

    return 0;
}*/

// 2-6.
// The goal is to Write a function setbits(x,p,n,y that returns x with the n bits that begin at posisiton p set to the rightmost n bits of y leaving the others bits unchanged walk me through )

/*
#include <stdio.h>

unsigned setbits( unsigned x,  unsigned p,  int n,  int y) {
        unsigned mask = (1 << n) - 1;
        unsigned Y_bits = y & mask;
        unsigned Y_BS = Y_bits << (p + 1 - n);
        unsigned clear_mask = ~(mask << (p + 1 - n));
   return (x &  clear_mask | Y_BS);
}
int main() {
    unsigned x = 170;
    unsigned y = 240;
    int p = 5;
    int n = 3;
    
    unsigned result = setbits (x, p, n ,y);
    
    printf("Result: %u\n", result);

    return 0;
}
*/

// 2-7

// "Write a function inter(x, p, n) that returns x with the n bits beginning at position p inverted—that is, bits with value 1 changed to 0 and bits with value 0 changed to 1—while leaving the other bits unchanged."

/*#include <stdio.h>

unsigned invert(unsigned x, int p, int n) {
    unsigned mask = ((1 << n) - 1) << (p + 1 - n);
    return x ^ mask;
}

int main() {
    unsigned  x = 170;
    int p = 5;
    int n = 3;
    
    unsigned result = invert(x, p, n);
    
    printf("Orignal x: %u\n", x);
    printf("Afterinversion of %d bits at pos %d: %u\n", n, p, result);

    return 0;
}*/

// 2-8

// Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by the n posistions 

/*// Online C compiler to run C program online
#include <stdio.h>

unsigned rightrot(unsigned x, int n) {
    int w_size = sizeof(unsigned) * 8;
    n = n % w_size;
    return (x >> n) | (x << (w_size - n));
}

int main() {
    unsigned x = 170;
    int n = 3;
    
    unsigned result =  rightrot(x ,n);
    printf("Original x: %u\n", x);
    printf("x rotated right by %d bits:  %u\n", n, result);
    
    return 0;
}*/
