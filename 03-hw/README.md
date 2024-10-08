# C++ Programming - Handout 3

Konrad Wojda, 9307820244

## Exercise 1a

### Code

By looking at ASCII table (https://en.wikipedia.org/wiki/ASCII#Printable_characters), we can see that capitalized letters have numbers from 65 to 90, and non-capitalized ones from 97 to 122. We can create a table in which we will count number of occurrences of our characters and index will be an offset from the beginning of letter block.
So we will iterate over `char text[]` and if current character is capitalized letter - we calculate `text[i] - 'A'` which is offset from number 65. We will do similar thing in case of non-capitalized letters.

```cpp
#include <iostream>

void count_chars(char text[]) {
    int count[26] = {0};

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            count[text[i] - 'A']++;
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            count[text[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
            std::cout << char('A' + i) << ", " << char('a' + i) << " : " << count[i] << std::endl;
    }
}

int main() {
	char text[] = "Today is a nice day for having a little picnic.";
	count_chars(text);
	return 0;
}

```

### Output

```
konradwojda@konradwojda-comp:~/studia/cpp-hyu/03-hw$ ./a.out 
A, a : 5
B, b : 0
C, c : 3
D, d : 2
E, e : 2
F, f : 1
G, g : 1
H, h : 1
I, i : 6
J, j : 0
K, k : 0
L, l : 2
M, m : 0
N, n : 3
O, o : 2
P, p : 1
Q, q : 0
R, r : 1
S, s : 1
T, t : 3
U, u : 0
V, v : 1
W, w : 0
X, x : 0
Y, y : 2
Z, z : 0
```

## Exercise 1b

### Code

Extended version is shown below. I used `std::max_element` function from `algorithm` header to get a number of occurrences of a letter with maximum number of occurrences. Then I did two nested loops, first one iterates from maximum number of occurrences to 0 and the second one iterates over all letters. If number of occurrences of that letter is bigger than current count of outer loop, I print `*`. 

```cpp
#include <iostream>
#include <algorithm>

void count_chars(char text[]) {
    int count[26] = {0};

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            count[text[i] - 'A']++;
        } else if (text[i] >= 'a' && text[i] <= 'z') {
            count[text[i] - 'a']++;
        }
    }

    int max_count = *std::max_element(count, count + 26);

    for (int i = max_count; i > 0; i--) {
        for (int j = 0; j < 26; j++) {
            if (count[j] >= i) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 26; i++) {
        std::cout << char('A' + i);
    }
    std::cout << std::endl;


}

int main() {
	char text[] = "Today is a nice day for having a little picnic.";
	count_chars(text);
	return 0;
}

```

### Output

```
konradwojda@konradwojda-comp:~/studia/cpp-hyu/03-hw$ ./a.out 
        *                 
*       *                 
*       *                 
* *     *    *     *      
* ***   *  * **    *    * 
* *******  * *** *** *  * 
ABCDEFGHIJKLMNOPQRSTUVWXYZ
```