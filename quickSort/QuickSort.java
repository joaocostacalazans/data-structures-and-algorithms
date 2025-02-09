class QuickSort {
    public static void main(String[] args) {
        int[] a = { 7, 6, 10, 5, 9, 2, 1, 15, 7 };
        int n = a.length;
        int lb = 0, ub = n - 1;

        quicksort(a, lb, ub);

        for (int num : a) {
            System.out.print(num + " ");
        }
    }

    public static void quicksort(int[] a, int lb, int ub) {
        if (lb < ub) {
            int loc = partition(a, lb, ub);
            quicksort(a, lb, loc - 1);
            quicksort(a, loc + 1, ub);
        }
    }

    public static int partition(int[] a, int lb, int ub) {
        int pivot = a[lb];
        int start = lb, end = ub;

        while (start < end) {
            while (a[start] <= pivot && start < ub) {
                start++;
            }
            while (a[end] > pivot && end > lb) {
                end--;
            }
            if (start < end) {
                swap(a, start, end);
                start++;
                end--;
            }
        }
        swap(a, lb, end);

        return end;
    }

    public static void swap(int[] a, int x, int y) {
        int temp = a[x];
        a[x] = a[y];
        a[y] = temp;
    }
}