/*#include<stdio.h>//不同数

int main()
{
    int n = 0;
    printf("input n:");
    scanf_s("%d", &n);
    int N = 0;
    int i, j, k;
    for (i = 1; i < n; i++) { 
        for (j = 1; j < n; j++) {
            for (k = 1; k < n; k++) { 
                if (i != k && i != j && j != k) {
                    printf("%d,%d,%d\n", i, j, k);
                    N++;
                }
            }
        }
    }
    printf("N=%d\n", N);
    return 0;
}*/

/*#include<stdio.h>//不同数
#include<stdlib.h>

int main() {
    double n = 0;
    scanf_s("%lf", &n);
    if (n <= 100000) {
        double bonus1 = n * 0.1;
        printf("%lf\n", bonus1);
    }
    else if(n<=200000) {
        double bonus2 = 100000 * 0.1 + (n - 100000) * 0.075;
        printf("%lf\n", bonus2);
    }
    else if (n <= 400000) {
        double bonus3 = 100000 * 0.1 + 100000 * 0.075 + (n - 200000) * 0.05;
        printf("%lf\n", bonus3);
    }
    else if (n <= 600000) {
        double bonus4 = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (n - 400000) * 0.03;
        printf("%lf\n", bonus4);
    }
    else if (n <= 1000000) {
        double bonus5 = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (n - 600000) * 0.015;
        printf("%lf\n", bonus5);
    }
    else{
        double bonus6 = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 +400000*0.015+(n-1000000)*0.01;
        printf("%lf\n", bonus6);
    }
    return 0;
}*/


/*#include<stdio.h>//总日子
#include<stdlib.h>

int year(int y) {
    if (y % 4 == 0 || y % 400 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int y=0, m=0, d=0;
    printf("input year mouth day:");
    scanf_s("%d %d %d", &y, &m, &d);
    int totalday = 0;
    if (year(y) == 1) {
        switch (m) {
        case 1:totalday = d;
            break;
        case 2:totalday = 31 + d;
            break;
        case 3:totalday = 31 + 29 + d;
            break;
        case 4:totalday = 31 + 29 + 31 + d;
            break;
        case 5:totalday = 31 + 29 + 31 + 30 + d;
            break;
        case 6:totalday = 31 + 29 + 31 + 30 + 31 + d;
            break;
        case 7:totalday = 31 + 29 + 31 + 30 + 31 + 30 + d;
            break;
        case 8:totalday = 31 + 29 + 31 + 30 + 31 + 30 + 31 + d;
            break;
        case 9:totalday = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + d;
            break;
        case 10:totalday = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
            break;
        case 11:totalday = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
            break;
        case 12:totalday = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
            break;
        }
    }
    else {
        switch (m) {
        case 1:totalday = d;
            break;
        case 2:totalday = 31 + d;
            break;
        case 3:totalday = 31 + 28 + d;
            break;
        case 4:totalday = 31 + 28 + 31 + d;
            break;
        case 5:totalday = 31 + 28 + 31 + 30 + d;
            break;
        case 6:totalday = 31 + 28 + 31 + 30 + 31 + d;
            break;
        case 7:totalday = 31 + 28 + 31 + 30 + 31 + 30 + d;
            break;
        case 8:totalday = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
            break;
        case 9:totalday = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
            break;
        case 10:totalday = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
            break;
        case 11:totalday = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
            break;
        case 12:totalday = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
            break;
        }
    }
    printf("totalday=%d\n", totalday);
    return 0;
}*/

/*#include<stdio.h>//九九乘法表
#include<stdlib.h>

int main() {
    int result = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            result = i * j;
            printf("%d*%d=%d ", j, i, result);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>//棋盘

int main() {
    for (int i = 1; i <= 8; i++) {
        for (int j = 0; j <= 8; j++) {
            if ((i + j) % 2 == 0) {
                printf("0 ");
            }
            else {
                printf("1 ");
            }
           
        }
        printf("\n");
    }
    return 0;
}/*/


/*#include<stdio.h>//斐波那契数列
#include<stdlib.h>

int main() {
    int a = 1, b = 1;
    
    int n = 0;
    scanf_s("%d", &n);
    printf("\t%d\t%d", a, b);
    for (int i = 1; i < n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
        printf("\t%d", temp);
    }
    return 0;
}*/

/*#include<stdio.h>//素数
#include<stdlib.h>

int prime(int x, int y) {
    int count = 0;
    int N = y - x;
    if (N <= 0) { return 0; };
    int* arr = (int*)malloc(N *8);
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = x; i < y; i++) {
        if (i < 2) continue;
        int is_p = 1; 
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_p = 0; 
                break;
            }
        }

        if (is_p) {
            arr[count] = i; 
            count++;       
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\ncount = %d\n", count);
    free(arr);
    return count;
}

int main() {
    int x = 0, y = 0;
    printf("input x y:");
    scanf_s("%d %d", &x, &y);
    prime(x, y);
    return 0;
}*/

/*#include<stdio.h>//水仙花数
#include<stdlib.h>

int main() {
    int n = 0, x = 0, y = 0, z = 0;
    for (int i = 100; i < 999; i++) {
        x = i % 10;
        y = (i / 10) % 10;
        z = (i / 100) % 10;
        if (i == x *x*x + y *y*y+ z *z*z) {
            printf("%d\t", i);
            n++;
        }
    }
    printf("\n%d\n", n);
    return 0;
}*/



/*#include<stdio.h>//最大公约数和最小公倍数

int gcd(int a, int b) {
    int n = a % b;        //辗转相除法：最后输出的b是最大公约数
    while (n != 0) {
        a = b;
        b = n;
        n = a % b;
    }
    
    return b;
}

int main() {
    int a = 0, b = 0, n = 0, max = 0;
    printf("input num:");
    scanf_s("%d %d", &a, &b);
    gcd(a, b);
    max = a * b / gcd(a, b);
    printf("gcd=%d\n", gcd(a, b));
    printf("lcm=%d\n", max);
    return 0;
}*/


/*#include<stdio.h>//字符统计

int main() {
    char c = 0;
    int numcount=0, lettercount=0, spacecount=0, othercount=0;
    printf("input str:");
    while ((c =getchar())!= '\n') {
        if (c >= '0' && c <= '9') {
            numcount++;
        }
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            lettercount++;
        }
        else if (c == ' ') {
            spacecount++;
        }
        else {
            othercount++;
        }
    }
    printf("numcount=%d\tlettercount=%d\tspacecount=%d\tothercount=%d\n", numcount, lettercount, spacecount, othercount);
    return 0;
}*/


/*#include<stdio.h>//求和

int main() {
    int s = 0, n = 0;
    scanf_s("%d %d", &s, &n);
    int sum = 0;
    int temp = s;
    for (int i = 1; i <= n; i++) {
        sum += s;
        s = s *10 + temp;
    }
    printf("%d", sum);
    return 0;
}*/

/*#include<stdio.h>//完数
#include<stdlib.h>

int main() {
    int a = 0, b = 0;
  
    if (scanf_s("%d %d", &a, &b) != 2) return 1;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
        printf("exchange a b\n");
    }

    int sum = 0;
    int count = 0;
    int N = b - a + 1;
    if (N <= 0) N = 1;
    int* arr = (int*)malloc(N * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    
    if (b < 6) {
        printf("no num\n");
        free(arr);
        return 0;
    }

    for (int i = a; i <= b; i++) {
        sum = 0;
        
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        
        if (sum == i && i > 0) {
            arr[count] = i;
            count++;
        }
    }

    if (count == 0) {
        printf("no num\n");
    }
    else {
        for (int i = 0; i < count; i++) {
            printf("%d\t", arr[i]);
        }
        printf("\ncount=%d\n", count);
    }

    free(arr);
    return 0;
}*/


/*#include<stdio.h>//弹球
#include<stdlib.h>


double calculate_bounce(double h, int n) {
    if (n <= 0) return 0;

    double way = h; 
    double current_h = h;

    for (int i = 1; i < n; i++) {
        current_h /= 2.0;      
        way += current_h * 2.0; 
    }

    
    double next_h = current_h / 2.0;

    printf("Total distance until %dth hit: %lf\n", n, way);
    return next_h;
}

int main() {
    double h = 0; 
    int n = 0;

    printf("input h n:");
   
    if (scanf_s("%lf %d", &h, &n) != 2) return 1;

    if (n <= 0) {
        printf("n must be greater than 0\n");
        return 0;
    }

    double bounce_h = calculate_bounce(h, n);
    printf("Height of the bounce after %dth hit: %lf\n", n, bounce_h);

    return 0;
}*/


/*#include<stdio.h>//猴子吃桃

int count_num(int n) {
    int temp = 1;
    int result = 0;
    for (int i = 1; i < n; i++) {
        result = (temp + 1) * 2;
        temp = result;
    }
    return result;
}

int main() {
    int n = 0;
    scanf_s("%d", &n);
    int result = count_num(n);
    printf("%d\n", result);
    return 0;
}*/


/*#include<stdio.h>//阶乘求和
#include<stdlib.h>

int main() {
    int n = 0;
    printf("input n: ");
    if (scanf_s("%d", &n) != 1) {
        return 1;
    }

    
    long long sum = 0;
    long long factorial = 1;

    
    for (int i = 1; i <= n; i++) {
        factorial *= i; 
        sum += factorial;
    }

    printf("%lld\n", sum);
    return 0;
}*/


 
