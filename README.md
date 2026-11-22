# Gra turowa typu roguelike

Projekt deweloperski, ZPO. Gra w terminalu napisana w C++, w której eksploruje się generowane mapy, znajduje ulepszenia i walczy z przeciwnikami. Funkcją jest dobra zabawa :)



## Instrukcja budowania i uruchomienia testów

>



## Diagram klas

>



## Mapa koncepcji obiektowych

>



## Rejestr użycia LLM

| Plik / fragment | Narzędzie | Do czego użyto i jak zweryfikowano |
| :--- | :--- | :--- |
| `.github/workflows/cmake-build.yml` | Gemini | Wygenerowanie skryptu CI/CD dla githuba aktualizującego kompilator do GCC 14 i budującego projekt przez CMake. Zweryfikowano poprzez pomyślne wykonanie pipeline'u na gałęzi main. |
| `CMakeLists.txt`, `src/test.cpp`, `.github/workflows/cmake-build.yml` | Gemini | Wygenerowanie konfiguracji pobierania Catch2, przykładowego testu jednostkowego oraz kroku `ctest` w pipeline CI/CD. Zweryfikowano lokalnie i przez wykonanie pipeline'u na GitHubie. |


