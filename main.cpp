#include <iostream>
using namespace std;

int findPdp(string str) {
    int index = -1;
    if (str.length() < 3) {
        return index;
    }
    for (int i = 0; i <= str.length() - 3; ++i) {
        if (str[i] == 'p' && str[i + 1] == 'd' && str[i + 2] == 'p') {
            return i;
        }
    }
    return index;
}

bool equality(string str) {
    int c = 0;
    int p = 0;
    for (int i = 0; i < str.length(); ++i) {
        if (i >= 2) {
            if (str[i - 2] == 'c' && str[i - 1] == '+' && str[i] == '+') {
                c++;
            }
            if (str[i - 2] == 'p' && str[i - 1] == 'd' && str[i] == 'p') {
                p++;
            }
        }
    }
    return (c == p);
}

int main() {
    // //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 1- masala @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    // Int tipida massiv va n soni berilgan. Agar massivdagi elementdan 1ta oldingi va
    // 1ta keyingi elementlar shu elementga teng bolmasa, shu elementni “yolg’iz”
    // element deylik. Massivda barcha yolgiz elementlarni qoshni elementlarini kattasi
    // bilan almashtiring va massivni qaytaring.
    // notAlone([1, 2, 3], 2) → [1, 3, 3]
    // notAlone([1, 2, 3, 2, 5, 2], 2) → [1, 3, 3, 5, 5, 2]
    // notAlone([3, 4], 3) → [3, 4]
    // notAlone([1, 1, 1, 2], 1) → [1, 1, 1, 2]
    int n;
    cout << "n=";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
    int k;
    cout << "k=";
    cin >> k;
    // notAlone([1, 2, 3], 2) → [1, 3, 3]
    // notAlone([1, 2, 3, 2, 5, 2], 2) → [1, 3, 3, 5, 5, 2]
    // notAlone([3, 4], 3) → [3, 4]
    // notAlone([1, 1, 1, 2], 1) → [1, 1, 1, 2]
    for (int i = 0; i < n - 1; ++i) {
        if (i == 0 && n > 1) {
            if (arr[i + 1] != k) {
                if (arr[i] <= arr[i + 1]) {
                    arr[i] = arr[i + 1];
                }
            }
        }
        if (i >= 1) {
            if (arr[i - 1] != k || arr[i + 1] != k) {
                if (arr[i - 1] <= arr[i + 1]) {
                    arr[i] = arr[i + 1];
                } else {
                    arr[i] = arr[i - 1];
                }
            }
        }
    }

    cout << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }


    // // //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 2 -masala @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    // Int tipida massiv va n soni berilgan. Massivni birinchi n ta elementlar gruppasi
    // oxirgi n ta elementlar grupasiga teng bolsa true qaytaring. Bunda n ni oraligi 0
    // dan massivni uznuligigacha.
    // sameEnds([5, 6, 45, 99, 13, 5, 6], 0) → true
    // sameEnds([5, 6, 45, 99, 13, 5, 6], 1) → false
    // sameEnds([5, 6, 45, 99, 13, 5, 6], 2) → true
    // sameEnds([5, 6, 45, 99, 13, 5, 6], 3) → false

    int length;
    cout << "length:";
    cin >> length;
    int arr2[length];
    for (int i = 0; i < length; ++i) {
        cout << "arr[" << i << "]=";
        cin >> arr2[i];
    }
    int n2;
    cout << "bu gruppalash kerak bo'lgan arr elementlari soni n2=";
    cin >> n2;
    bool result = true;
    for (int i = 0; i < n2; ++i) {
        if (arr2[i] != arr2[length - (n2 - i)]) {
            result = false;
        }
    }
    cout << "Natija:" << boolalpha << result << endl;


    // //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 3 -masala @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // int tipida massiv berilgan. Massivdagi barcha 0 sonlarini shu 0 ni o’ng qismida
    // uchraydigan eng katta toq son bilan almashtiring. Agar eng katta toq son
    // uchramasa, 0 ni shunday qoldiring.
    //
    // zeroMax([0, 5, 0, 3]) → [5, 5, 3, 3]
    // zeroMax([0, 4, 0, 3]) → [3, 4, 3, 3]
    // zeroMax([0, 1, 0]) → [1, 1, 0]

    int n3;
    cout << "n3=";
    cin >> n3;
    int arr3[n3];
    for (int i = 0; i < n3; ++i) {
        cout << "arr3[" << i << "]=";
        cin >> arr3[i];
    }

    for (int i = 0; i < n3; ++i) {
        cout << arr3[i] << " ";
    }

    for (int i = 0; i < n3; ++i) {
        if (arr3[i] == 0) {
            int maxToq = arr3[i];
            for (int j = i + 1; j < n3; ++j) {
                if (maxToq < arr3[j] && arr3[j] % 2 == 1) {
                    maxToq = arr3[j];
                }
            }
            arr3[i] = maxToq;
        }
    }
    cout << endl;
    for (int i = 0; i < n3; ++i) {
        cout << arr3[i] << " ";
    }

    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 4 -masala @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    // Int tipida massiv berilgan. Massivdagi barcha 10 sonlarini olib tashlang va qolgan
    // sonlarni iloji boricha chaproqqa suring. Massiv oxirida qolgan bosh joylarni 0
    // bilan toldiring.
    // withoutTen([1, 10, 10, 2]) → [1, 2, 0, 0]
    // withoutTen([10, 2, 10]) → [2, 0, 0]
    // withoutTen([1, 99, 10]) → [1, 99, 0]

    int n4;
    cout << "n4=";
    cin >> n4;
    int arr4[n4];
    for (int i = 0; i < n4; ++i) {
        cout << "arr4[" << i << "]=";
        cin >> arr4[i];
    }
    for (int i = 0; i < n4; ++i) {
        cout << arr4[i] << " ";
    }
    int index4 = 0;
    for (int i = 0; i < n4; ++i) {
        if (arr4[i] != 10) {
            arr4[index4++] = arr4[i];
        }
    }

    while (index4 < n4) {
        arr4[index4++] = 0;
    }
    cout << endl;
    for (int i = 0; i < n4; ++i) {
        cout << arr4[i] << " ";
    }


    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 5 -masala @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    //Int tipida massiv berilgan. Massivni juft elementlarini chap qismga, toq
    // elementlarini ong qismga joylashtiring, bunda sonlar joylashuvi ahamiyatsiz.
    ///
    // evenOdd([1, 0, 1, 0, 0, 1, 1]) → [0, 0, 0, 1, 1, 1, 1]
    // evenOdd([3, 3, 2]) → [2, 3, 3]
    // evenOdd([2, 2, 2]) → [2, 2, 2]
    int n5;
    cout << "n5=";
    cin >> n5;
    int arr5[n5];
    for (int i = 0; i < n5; ++i) {
        cout << "arr[" << i << "]=";
        cin >> arr5[i];
    }
    for (int i = 0; i < n5; ++i) {
        cout << arr5[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < n5; ++i) {
        if (arr5[i] % 2 == 1) {
            for (int j = i + 1; j < n5; ++j) {
                if (arr5[j] % 2 == 0) {
                    int temp = arr5[i];
                    arr5[i] = arr5[j];
                    arr5[j] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n5; ++i) {
        cout << arr5[i] << " ";
    }

    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 6 -masala @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    //  Str satr berilgan. str satrda “pdp” so’zi nechanchi indexda uchrashini aniqlab
    // qiymat sifatida qaytaruvchi funksiya tuzing. Agar so’z topilmasa -1natija qaytsin.
    // Qidirish funksiyalaridan foydalanilmasin.
    string str = "Salompd";
    cout << findPdp(str); // buni funksiyasi tepada yozilgan.
    return 0;


    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 7 -masala @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // S1 va S2 satr berilgan. S2 satrida birinchi uchragan S1 satrni o’chiradigan
    // dastur tuzing.
    // str1="salom"
    // str2="Assalomu Alaykum"

    string str1 = "salom";
    string str2 = "Assalomu Alaykum";
    int index = str2.find(str1);
    if (index >= 0) {
        str2.erase(index, str1.length());
    }
    cout << str2;

    //@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 7 -masala @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
    //Satr berilgan. Shu satrda “pdp” va “c++” so’zlari teng miqdorda uchrasa, true
    //qaytaring.
    string str7 = "1pdp1cadoc++";
    cout << boolalpha << equality(str7);
}
