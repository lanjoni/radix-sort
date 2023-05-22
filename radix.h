#ifndef RADIX_H
#define RADIX_H

class radix {
    public:
        radix();
        radix(const radix& orig);
        virtual ~radix();

        int* sort(int *arr, int n, int max);
        void present(int *array, int size);

    private:
};

#endif /* RADIX_H */
