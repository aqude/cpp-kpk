#include "iostream"

int main() {
  std::cout << "Введите 0 4 8 9 30" << '\n';
  int a;
  std::cin >> a;
  // std::cout << "Введите число с которым хотите сравнить" << '\n';
  // int b;
  // std::cin >> b;
  // switch (a) {
  //     case (a >= 30):
  //         console.log(`${a} > 30`);
  //         break;
  //     case( a >= 9 && a <= 30):
  //         console.log(`> 9 ${a} < 30`);
  //         break;
  //     case (a >= 8 && a <= 9):
  //         console.log(`8 > ${a} < 9`);
  //         break;
  //     case (a >= 4 && a <= 8):
  //         console.log(`4 > ${a} < 8`);
  //         break;
  //     case (a >= 0 && a <= 4):
  //     console.log(`${a} > 0`);
  //     break;
  //     case (a >= 0 && a <= 4):
  //         console.log(`0 > ${a} < 4`);
  //         break;
  //     case (a <= 0):
  //         console.log(` ${a} < 0`);
  //         break;
  //     default:
  //         console.log("Неверные данные!");
  //         break;
  // }
  // switch (a) {
  //   case a >= 30: std::cout << a << " >= 30" << '\n'; break;
  //   case a >= 9 && a <= 30: std::cout << a << " <= 30" << '\n'; break;
  //   case a >= 8 && a <= 9: std::cout << a << " <= 9" << '\n'; break;
  //   case a >= 4 && a <= 8: std::cout << a << " <= 8" << '\n'; break;
  //   case a >= 0 && a <= 4: std::cout << a << " >= 4" << '\n'; break;
  //   case a <= 0:  std::cout << a << " <= 0" << '\n'; break;
  //   default: std::cout << "Неверные данные!" << '\n'; break;
//   // }
//   switch (a) {
//     case 0:
//       if (b > 0) {
//         std::cout << b << " > " << a << '\n';
//       } else if (b = 0) {
//         std::cout << b << " = " << a << '\n';
//       } else {
//         std::cout << b << " < " << a << '\n';
//       }
//     break;
//     case 4:
//       if (b > 0) {
//         std::cout << b << " > " << a << '\n';
//       } else if (b = 0) {
//         std::cout << b << " = " << a << '\n';
//       } else {
//         std::cout << b << " < " << a << '\n';
//       }
//       break;
//     case 8:
//       if (b > 0) {
//         std::cout << b << " > " << a << '\n';
//       } else if (b = 0) {
//         std::cout << b << " = " << a << '\n';
//       } else {
//         std::cout << b << " < " << a << '\n';
//       }
//       break;
//     case 9:
//       if (b > 0) {
//         std::cout << b << " > " << a << '\n';
//       } else if (b = 0) {
//         std::cout << b << " = " << a << '\n';
//       } else {
//         std::cout << b << " < " << a << '\n';
//       }
//       break;
//     case 30:
//       if (b > 0) {
//         std::cout << b << " > " << a << '\n';
//       } else if (b = 0) {
//         std::cout << b << " = " << a << '\n';
//       } else {
//         std::cout << b << " < " << a << '\n';
//       }
//       break;
//     default: std::cout << "Неверные данные!" << '\n'; break;
//   }
// }



  if (a >= 30) {
      std::cout << a << " >= 30" << '\n';
  } else if (a >= 9 && a <= 30) {
    std::cout << a << " <= 30" << '\n';
  } else if (a >= 8 && a <= 9) {
    std::cout << a << " <= 9" << '\n';
  } else if (a >= 4 && a <= 8) {
      std::cout << a << " <= 8" << '\n';
  } else if (a >= 0 && a <= 4) {
      std::cout << a << " >= 4" << '\n';
  } else if (a <= 0) {
      std::cout << a << " <= 0" << '\n';
  } else {
      std::cout << "Неверные данные!" << '\n';
  }
}
