forward_list

1. Write a c++ code, to demonstrate the forward list.
2. Write a c++ code, in which create a forward list and assign values to it at the time of
initialization and print it on the console screen.
3. Create a forward list insert elements from 1 to 10 and find the sum of elements.
4. Write a program to reverse forward list elements.
5. Write a program remove all consecutive duplicate elements from the forward list
6. Create two forward lists of int type, and merge them.
7. Below are two forward lists, first sort them and then merge them.
forwardlist1={3,2,9}
forwardlist2={8,1,2}
8. Create two forward lists of int type, and swap the elements of both forward lists with
each other.
9. Write a C++ code to demonstrate working of splice_after() in forward list.
10. Write a program to assign values in forward_list using the values of another list

Solution:-

1. #include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {1, 2, 3, 4, 5};

    std::cout << "Forward list elements: ";
    for (const auto& elem : flist) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

2. #include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {10, 20, 30, 40, 50};

    std::cout << "Forward list elements: ";
    for (const auto& elem : flist) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

3. #include <iostream>
#include <forward_list>
#include <numeric>

int main() {
    std::forward_list<int> flist;
    for (int i = 1; i <= 10; ++i) {
        flist.push_front(11 - i);
    }

    int sum = std::accumulate(flist.begin(), flist.end(), 0);

    std::cout << "Sum of forward list elements: " << sum << std::endl;

    return 0;
}

4. #include <iostream>
#include <forward_list>
#include <algorithm>

int main() {
    std::forward_list<int> flist = {1, 2, 3, 4, 5};

    flist.reverse();

    std::cout << "Reversed forward list elements: ";
    for (const auto& elem : flist) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

5. #include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist = {1, 2, 2, 3, 4, 4, 5};

    flist.unique();

    std::cout << "Forward list after removing consecutive duplicates: ";
    for (const auto& elem : flist) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

6. #include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist1 = {1, 2, 3};
    std::forward_list<int> flist2 = {4, 5, 6};

    flist1.merge(flist2);

    std::cout << "Merged forward list: ";
    for (const auto& elem : flist1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

7. #include <iostream>
#include <forward_list>
#include <algorithm>

int main() {
    std::forward_list<int> flist1 = {3, 2, 9};
    std::forward_list<int> flist2 = {8, 1, 2};

    flist1.sort();
    flist2.sort();

    flist1.merge(flist2);

    std::cout << "Sorted and merged forward list: ";
    for (const auto& elem : flist1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

8. #include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist1 = {1, 2, 3};
    std::forward_list<int> flist2 = {4, 5, 6};

    flist1.swap(flist2);

    std::cout << "First forward list after swap: ";
    for (const auto& elem : flist1) {
        std::cout << elem << " ";
    }
    std::cout << "\nSecond forward list after swap: ";
    for (const auto& elem : flist2) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

9. #include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> flist1 = {1, 2, 3};
    std::forward_list<int> flist2 = {4, 5, 6};

    auto it = flist1.before_begin(); // Iterator pointing to the position before the first element
    flist1.splice_after(it, flist2); // Splice flist2 after the element pointed by it

    std::cout << "Forward list after splice_after: ";
    for (const auto& elem : flist1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

10. #include <iostream>
#include <forward_list>
#include <list>

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5};
    std::forward_list<int> flist;

    flist.assign(lst.begin(), lst.end());

    std::cout << "Forward list elements: ";
    for (const auto& elem : flist) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
