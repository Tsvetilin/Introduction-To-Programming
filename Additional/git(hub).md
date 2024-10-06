## Работа с git и GitHub

- Инсталирайте git от официалния сайт [https://git-scm.com/downloads](<https://git-scm.com/downloads>)
- Създайте си профил в [https://github.com/](<https://github.com/>)

### Работа през Visual Studio

- Отворете Visual Studio
- Изберете **Clone a repository**
- Изберете **GitHub**
- Добавете си акаунта
- Изберете repo, което да клонирате
- Когато отворите проекта, отворете прозореца **Git Changes**

##### Създаване на branch

- Подсигурете се, че сте на последната версия на **main** branch-a като направите изберете **Pull from** > **Origin** от трите точки
- Създайте си нов branch като отворите падащото меню, където е **main**
- Напишете име на branch и натиснете **New branch** 

#### Качване на промени

- Пишете описателно има на промените, които са направени. Обикновено за съобщение се пише в императивна форма, максимално кратко и ясно. Например **Add solution to Task01**
- Натиснете **Commit All**
- Изберете **Push to** > **Origin** от трите точки

#### Теглене на промени

- Отидете на `main` branch-a 
- Изберете **Pull from** > **Origin** от трите точки

### Работа през cli

// TODO

### Качване на решения от самостоятелна работа

1. Отидете на [https://github.com/Tsvetilin/Introduction-To-Programming](<https://github.com/Tsvetilin/Introduction-To-Programming>)
2. Направете **Fork** (горе вдясно, до името на репото)
3. Клонирайте си локално fork-a
4. Създайте си нов branch с име `<fn>/week <xx>`
5. В съответана директория за практикум добавете като отделни файлове решенията на задачите, кръстени `Task <xx>.cpp`
6. Качете промените
7. В GitHub отидете на [https://github.com/Tsvetilin/Introduction-To-Programming](<https://github.com/Tsvetilin/Introduction-To-Programming>)
8. Отидете на **Pull requests**
9. Създайте нов чрез **New pull request**
10. Изберете вашият branch
11. Добавете заглавие `Solutions week <xx>, <fn>, <name>`
12. Създайте PR
13. Преглежайте за коментари и обратна връзка
14. Последващи промени, направени локално и после качени ще бъдат отразени в Pull request-a
15. При необходимост от създаване на нов Pull request за следваща седмица, трябва да синхронизирате fork-a в GitHub (ще излезе prompt)
16. Отивате локално на `main` branch-a 
17. Pull-вате промените
18. Отивате на стъпка 4 и продължавате надолу

\* Навскякъде с xx e белязана текушата седмица, с fn - вашият факултетен номер, с name - вашето име

\* Официална документация за работа с GitHub - [https://docs.github.com/en/get-started](<https://docs.github.com/en/get-started>)