# Libryazha

**Libryazha** is a utility module within [Libryazhahand](../README.md) providing C++ headers for Nintendo Switch Tesla overlays. It is source-compatible with `libultra` from the upstream `ppkantorski/libryazhahand` but remaps the runtime namespace to `ryazhahand`.

---

## Описание

**Libryazha** — это основной утилитарный модуль библиотеки Libryazhahand. Он содержит реализации для работы с графикой, звуком и системными функциями Switch.

### Основные компоненты

*   `source/global_vars.cpp`: Определение путей конфигурации (`/config/ryazhahand/`), путей к обоям и звуковым пакетам.
*   `source/tsl_utils.cpp`: Реализация загрузки PNG-обоев (преобразование libpng в упакованный формат RGBA4444) и поддержка иконок уведомлений 32x32.
*   `source/audio.cpp`: Потоковое аудио через `audout` с использованием "тихого" буфера для устранения задержек при первом воспроизведении.
*   `include/tsl_utils.hpp`: Публичный API для оверлеев.

### Использование

```cpp
#include <tsl_utils.hpp>   // Помощники ult:: (PNG, аудио, пути, i18n)
```

Пространство имен `ult::` сохранено для обеспечения совместимости с существующими оверлеями, использующими libryazhahand.

### Лицензия

Распространяется под лицензией **GPL-2.0**. Унаследовано от libryazhahand.
