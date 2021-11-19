
#include <cs50.h>
#include <limits.h>
#include <stdio.h>

bool visa(int x) {
  if (x == 4) return true;
  return false;
}

bool master(int x) {
  if (x == 51 || x == 52 || x == 53 || x == 54 || x == 55) return true;
  return false;
}

bool ameri(int x) {
  if (x == 34 || x == 37) return true;
  return false;
}

int sum(int n) {
  if (n < 10) return n;
  int s = 0;
  while (n) {
    s += n % 10;
    n /= 10;
  }
  return s;
}

void check(long long n) {
  int sum1 = 0, sum2 = 0;
  bool turn = 0;
  long long aux = n;
  int count = 0;
  while (aux > 0) {
    if (turn == 0) {
      sum2 += aux % 10;
    } else {
      int db = aux % 10;
      sum1 += sum(db * 2);
    }

    aux /= 10;
    turn = !turn;
    count++;
  }

  if ((sum1 + sum2) % 10 != 0) {
    printf("%d %d", sum1, sum2);
    printf("INVALID\n");
    return;
  }

  while (n > 0) {
    if (n < 100) {
      if (master(n) == true && count == 16) {
        printf("MASTERCARD\n");
        return;
      } else if (ameri(n) == true && count == 15) {
        printf("AMEX\n");
        return;
      } else if (visa(n) == true && (count == 13 || count == 16)) {
        printf("VISA\n");
        return;
      }
    }

    n /= 10;
  }

  printf("INVALID\n");
}

bool checknum(long long x) {
  if (!x) return false;
  if (x < 0) return false;
  if (x > 0 && x < 9999999999999999) return true;
  return false;
}

int main(void) {
  long long x = get_long("Number: \n");

  if (checknum(x) == false) do {
      x = get_long("Number: \n");
    } while (checknum(x) == false);
  check(x);
}