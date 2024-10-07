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

    // for (int i = 0; i < 26; i++) {
    //         std::cout << char('A' + i) << ", " << char('a' + i) << " : " << count[i] << std::endl;
    // }

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
