# libtesla

**libtesla** is the core UI framework for Nintendo Switch overlays. It handles layer creation, drawing, and input management, ensuring a consistent look and feel across all homebrew overlays. This version is a customized fork included in **Librazhahand**.

---

## Описание

**libtesla** — это графический фреймворк для создания оверлеев на Nintendo Switch. Он обеспечивает взаимодействие между загрузчиком Tesla и пользовательским кодом, управляя отрисовкой интерфейса и обработкой ввода.

### Особенности

*   **Единообразие:** Гарантирует, что все оверлеи выглядят и ведут себя как нативные элементы системы.
*   **Управление слоями:** Автоматически обрабатывает отображение и скрытие оверлеев.
*   **Ввод:** Включает встроенную поддержку сенсорного экрана и физических кнопок.
*   **Кастомизация:** В этой версии добавлены специфические элементы для Librazhahand, такие как улучшенные списки и ползунки.

### Использование

Библиотека поставляется как часть Librazhahand и подключается автоматически при использовании `ryazhahand.mk`.

### Авторы

*   **WerWolv**: Оригинальный создатель libtesla.
*   **Dimasick-git**: Модификации для Librazhahand.
