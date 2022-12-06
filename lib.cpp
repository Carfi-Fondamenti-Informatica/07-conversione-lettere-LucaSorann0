#include "lib.h"

bool lettera (char &let) {
  if (let>=65 && let<=90) {
    let = let + 32;
    return true;
} else if (let>=97 && let<=122) {
    let = let - 32;
    return true;
} else {
    return false;
}
}
