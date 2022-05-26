// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
uint64_t i;
  for (i = 2; i <= value / 2; i++) {
    if (value == 2) return true;
    else if (value % i == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
uint64_t j = 2;
  for (uint64_t k = 1; k <= n; j++) {
    if (checkPrime(j) == true) k++;
  }
  return j -= 1;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
uint64_t j = value + 1;
  for (uint64_t k = 1; k <= 1; j++) {
    if (checkPrime(j) == true) k++;
  }
  return j -= 1;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
uint64_t k = 0;
  for (uint64_t j = 2; j <= hbound - 1; j++) {
    if (checkPrime(j) == true) k = k + j;
  }
  return k;
}
