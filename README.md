# detect [dirname]

Simple C program to detect type of project based on in-directory filename heuristics.
Filename detection is case-insensitive.

Outputs all detected project types, one per line.

## Install

  > cd detect
  > make install

## Supports:

- C via `Makefile`
- Node.js via `package.json`
- Ruby via `Gemfile`
- Python via `requirements.txt` or `setup.py`
- Clojure via `clojure.clj`
- Java via `pom.xml`


## Example:

    > detect
    c

    > detect test
    c
    node.js
    ruby
    python
    clojure
    java
