#ifndef TERMO_H
#define TERMO_H
 
#define KEY_TEMPERATURE 0

void termo_init(Window* window);
void termo_deinit(void);
void termo_set_style(bool inverse);
void termo_update_time(struct tm *tick_time);
void termo_inbox_received(DictionaryIterator *iterator, void *context);

#endif /* TERMO_H */
