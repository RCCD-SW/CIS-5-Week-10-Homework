#include <iostream>

// Practice 10 — Your Name
// CIS 5 Week 10 · Menu + helpers

void printMenu() {
  std::cout << "1) Average  2) High  3) Quit\n";
}

double average(const int a[], int n) {
  // TODO: return the average (guard n == 0)
  return 0.0;
}

int high(const int a[], int n) {
  // TODO: return the max (seed from a[0])
  return a[0];
}

int main() {
  const int N = 5;
  int scores[N] = {88, 92, 70, 95, 81};
  int choice = 0;

  do {
    printMenu();
    std::cin >> choice;
    // TODO: call average / high; keep main thin
  } while (choice != 3);

  return 0;
}
