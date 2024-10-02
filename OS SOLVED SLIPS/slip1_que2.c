#include <stdio.h>

#define MAX_FRAMES 10 // Maximum number of frames

void fifo(int page_ref[], int num_pages, int num_frames) {
    int frames[MAX_FRAMES] = {0}; // To store page frames
    int page_faults = 0;           // To count page faults
    int next_frame = 0;            // To track the next frame to replace

    // Initialize frames to -1 (indicating empty frames)
    for (int i = 0; i < num_frames; i++) {
        frames[i] = -1;
    }

    printf("Page Reference String: ");
    for (int i = 0; i < num_pages; i++) {
        printf("%d ", page_ref[i]);
    }
    printf("\n");

    for (int i = 0; i < num_pages; i++) {
        int page = page_ref[i];
        int found = 0; // Flag to check if page is found

        // Check if the page is already in one of the frames
        for (int j = 0; j < num_frames; j++) {
            if (frames[j] == page) {
                found = 1; // Page found, no page fault
                break;
            }
        }

        // If page is not found, we have a page fault
        if (!found) {
            frames[next_frame] = page; // Replace the oldest page (FIFO)
            next_frame = (next_frame + 1) % num_frames; // Move to next frame
            page_faults++; // Increment page fault count

            // Print the current state of frames after page fault
            printf("Page Fault! Frames: ");
            for (int j = 0; j < num_frames; j++) {
                printf("%d ", frames[j]);
            }
            printf("\n");
        }
    }

    printf("Total Page Faults: %d\n", page_faults);
}

int main() {
    int page_ref[] = {3, 4, 5, 6, 3, 4, 7, 3, 4, 5, 6, 7, 2, 4, 6};
    int num_pages = sizeof(page_ref) / sizeof(page_ref[0]);
    int num_frames = 3; // Number of memory frames

    fifo(page_ref, num_pages, num_frames);
    
    return 0;
}