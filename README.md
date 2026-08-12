# Libryazhahand

**Libryazhahand** is a high-performance Tesla overlay library for Nintendo Switch homebrew. It is a source-compatible fork of [libultrahand](https://github.com/ppkantorski/libultrahand) with a customized runtime configuration namespace (`/config/ryazhahand/`). Key features include PNG wallpaper support via libpng, an optimized audio pipeline with silent buffer priming to eliminate input lag, and enhanced UI primitives.

---

## Описание

**Libryazhahand** — это специализированная библиотека для создания оверлеев (Tesla) на Nintendo Switch. Она является форком [libultrahand](https://github.com/ppkantorski/libultrahand) и оптимизирована для использования в экосистеме Ryazhenka.

### Основные особенности

*   **Пространство имен конфигурации:** Все настройки, темы и звуки считываются из директории `/config/ryazhahand/`, что предотвращает конфликты с оригинальным Ultrahand.
*   **Поддержка PNG:** В отличие от оригинальных оверлеев, использующих сырые `.rgba` файлы, Libryazhahand поддерживает загрузку PNG-обоев напрямую через `libpng` (`loadPngToRGBA4444`).
*   **Оптимизированный звук:** Реализован механизм "прогрева" (priming) аудио-движка при инициализации. Это устраняет задержку (lag) при первом воспроизведении звука, отправляя пустой буфер в DMA-engine заранее.
*   **Улучшенный UI:** Расширенный набор примитивов `libtesla` (List, ListItem, NamedStepTrackBar) и поддержка иконок уведомлений в формате RGBA8888 (32x32).
*   **Совместимость:** Библиотека сохраняет исходную совместимость с апстримом libultrahand, что позволяет пересобирать существующие оверлеи с минимальными правками.

### Структура библиотеки

| Директория | Описание |
| :--- | :--- |
| `libryazha/` | Заголовочные файлы утилит C++, интернационализация (i18n) и помощники конфигурации. |
| `libtesla/` | Форк `libtesla` от WerWolv с дополнительными UI-элементами и исправлениями. |

### Подключение

Для использования библиотеки в качестве субмодуля:

```bash
git submodule add https://github.com/Dimasick-git/libryazhahand.git lib/libryazhahand
git submodule update --init --recursive
```

В вашем `Makefile` добавьте путь к библиотеке:

```makefile
LIBDIRS += $(CURDIR)/lib/libryazhahand
```

### Лицензия

Проект распространяется под лицензией **GPL-2.0**. Подробности в файле `LICENSE`.
История лицензий апстрима сохранена в `SUB_LICENSE`.

**Авторы:** ppkantorski (upstream Ultrahand), WerWolv (libtesla), Dimasick-git (Libryazhahand fork).
