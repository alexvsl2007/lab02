## Лабораторная работа№2
__Васильев Александр ИУ8-21__


# Part I
1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
    ```sh
    $ git clone https://github.com/alexvsl2007/lab02.git
    cd lab02
    Клонирование в «lab02»...
    remote: Enumerating objects: 3, done.
    remote: Counting objects: 100% (3/3), done.
    remote: Compressing objects: 100% (2/2), done.
    remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
    Получение объектов: 100% (3/3), готово.
    ```
3. Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.
  ```
      #include <iostream>
  
  using namespace std;
  
  int main() {
      cout << "Hello, World!" << endl;
      return 0;
  }
  ```
4. Добавьте этот файл в локальную копию репозитория.
  ```
  $ git add hello_world.cpp
  ```
5. Закоммитьте изменения с осмысленным сообщением.
  ```
  $ git commit -m "Initial commit with Hello World program"
[main cba383f] Initial commit with Hello World program
 1 file changed, 8 insertions(+)
 create mode 100644 hello_world.cpp

  ```
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.
 ```
    #include <iostream>
  #include <string>
  
  using namespace std;
  
  int main() {
      string name;
      cout << "Enter your name: ";
      cin >> name;
      cout << "Hello, World! from " << name << endl;
      return 0;
  }
  ```
7. Закоммитьте новую версию программы. 
  ```
  $ git commit -am "Updated Hello World program to ask for user's name"
[main c153fdf] Updated Hello World program to ask for user's name
 1 file changed, 12 insertions(+)
  ```
8. Запуште изменения в удалёный репозиторий.
  ```
  git push origin main
  Username for 'https://github.com': alexvsl2007
  Password for 'https://alexvsl2007@github.com': 
  Перечисление объектов: 10, готово.
  Подсчет объектов: 100% (10/10), готово.
  При сжатии изменений используется до 4 потоков
  Сжатие объектов: 100% (8/8), готово.
  Запись объектов: 100% (9/9), 1.02 КиБ | 1.02 МиБ/с, готово.
  Total 9 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
  remote: Resolving deltas: 100% (1/1), done.
  To https://github.com/alexvsl2007/lab02.git
  0414ce4..39beeba  main -> main

  ```
9. Проверьте, что история коммитов доступна в удалёный репозитории.
    
# Part II
1.В локальной копии репозитория создайте локальную ветку patch1.
    ```
    $ git checkout -b patch1
    Переключились на новую ветку «patch1»
    ```
2.Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;

    ```sh
      #include <iostream>
      #include <string>
      
      int main() {
          std::string name;
          std::cout << "Enter your name: ";
          std::cin >> name;
          std::cout << "Hello, World! from " << name << std::endl;
          return 0;
      }
    ```
    
commit, push локальную ветку в удалённый репозиторий.
    ```
    $ git commit -am "Removed using namespace std"
    git push origin patch1
    Текущая ветка: patch1
    нечего коммитить, нет изменений в рабочем каталоге
    Username for 'https://github.com': alexvsl2007                                         
    Password for 'https://alexvsl2007@github.com': 
    Перечисление объектов: 5, готово.
    Подсчет объектов: 100% (5/5), готово.
    При сжатии изменений используется до 4 потоков
    Сжатие объектов: 100% (3/3), готово.
    Запись объектов: 100% (3/3), 393 байта | 393.00 КиБ/с, готово.
    Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
    remote: Resolving deltas: 100% (1/1), completed with 1 local object.
    remote: 
    remote: Create a pull request for 'patch1' on GitHub by visiting:
    remote:      https://github.com/alexvsl2007/lab02/pull/new/patch1
    remote: 
    To https://github.com/alexvsl2007/lab02.git
     * [new branch]      patch1 -> patch1
    ```
  3.Проверьте, что ветка patch1 доступна в удалёный репозитории.
  4.Создайте pull-request patch1 -> master.
  5.В локальной копии в ветке patch1 добавьте в исходный код комментарии.
    commit, push.
    
    ```
    $ git commit -am "Added comments to the code"
    git push origin patch1
    [patch1 0a3a1f6] Added comments to the code
     1 file changed, 2 insertions(+), 3 deletions(-)
    Username for 'https://github.com': alexvsl2007
    Password for 'https://alexvsl2007@github.com': 
    Перечисление объектов: 5, готово.
    Подсчет объектов: 100% (5/5), готово.
    При сжатии изменений используется до 4 потоков
    Сжатие объектов: 100% (3/3), готово.
    Запись объектов: 100% (3/3), 335 байтов | 335.00 КиБ/с, готово.
    Total 3 (delta 2), reused 0 (delta 0), pack-reused 0 (from 0)
    remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
    To https://github.com/alexvsl2007/lab02.git
       7bbd888..0a3a1f6  patch1 -> patch1

    ```
  6.Проверьте, что новые изменения есть в созданном на шаге 5 pull-request
  7.В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.
  8.Локально выполните pull.
  ```
$ git checkout main  
git pull origin main  
Переключились на ветку «main»
Эта ветка соответствует «origin/main».
remote: Enumerating objects: 1, done.
remote: Counting objects: 100% (1/1), done.
remote: Total 1 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Распаковка объектов: 100% (1/1), 905 байтов | 905.00 КиБ/с, готово.
Из https://github.com/alexvsl2007/lab02
 * branch            main       -> FETCH_HEAD
   39beeba..4e5e092  main       -> origin/main
Обновление 39beeba..4e5e092
Fast-forward
 hello_world.cpp | 18 ++++--------------
 1 file changed, 4 insertions(+), 14 deletions(-)

```
  9.С помощью команды git log просмотрите историю в локальной версии ветки master.Удалите локальную ветку patch1.
```
$ git branch -d patch1
Ветка patch1 удалена (была 0a3a1f6).
```
# Part III
1.Создайте новую локальную ветку patch2.
```
$ git checkout -b patch2
Переключились на новую ветку «patch2»

```
2.Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.
```
$ clang-format -style=Mozilla -i hello_world.cpp
```
3.commit, push, создайте pull-request patch2 -> master.
```
$ git commit -am "Formatted code with clang-format"
[patch2 dedec40] Formatted code with clang-format
 1 file changed, 8 insertions(+), 6 deletions(-)

$ git push origin patch2
Username for 'https://github.com': alexvsl2007
Password for 'https://alexvsl2007@github.com': 
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 4 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 348 байтов | 348.00 КиБ/с, готово.
Total 3 (delta 2), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/alexvsl2007/lab02.git
   4e5e092..dedec40  patch2 -> patch2



```
4.В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.
```
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: "; // Запрос имени пользователя
    std::cin >> name;
    std::cout << "Hello, World! from " << name << std::endl; // Вывод приветствия
    return 0;
}

```
5.Убедитесь, что в pull-request появились конфликтны.
6.Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.
```
$ git pull origin main  
git rebase main  

Из https://github.com/alexvsl2007/lab02
 * branch            main       -> FETCH_HEAD
Уже актуально.
Текущая ветка main уже в актуальном состоянии.
$ git rebase --continue
fatal: no rebase in progress

```
7.Сделайте force push в ветку patch2
```
$ git push origin patch2 --force
Username for 'https://github.com': alexvsl2007  
Password for 'https://alexvsl2007@github.com': 
Everything up-to-date

```
8.Убедитель, что в pull-request пропали конфликтны.
9.Вмержите pull-request patch2 -> master.
