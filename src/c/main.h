#pragma once
#include <pebble.h>

#define SETTINGS_KEY 1

typedef struct ClaySettings {
    char bigGMT[10];
    char smallGMT[10];
} __attribute__((__packed__)) ClaySettings;

static void prv_display_time(struct tm *tick_time);

static void prv_default_settings();
static void prv_load_settings();
static void prv_save_settings();
static void prv_inbox_received_handler(DictionaryIterator *iter, void *context);
static void prv_window_load(Window *window);
static void prv_window_unload(Window *window);
static void prv_init(void);
static void prv_deinit(void);
int main(void);
