# Home
### 이슈 관리: [전체 이슈 list](https://github.com/brixxt27/cpp_module_01/issues/1)

# Exercise 00: BraiiiiiiinnnzzzZ
## Usage
```
```
## Summary
```
Turn-in directory : ex00/
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp,
newZombie.cpp, randomChump.cpp
Forbidden functions : None
```
## Detail
- Zombie class 를 구현하라. 이는 private attribute 로 name string을 가지고 있다.
- void announce(void); 를 멤버 함수로 구현하고, 이는 <name>: BraiiiiiinnnzzzZ... 라고 출력한다.
- Zombie* newZombie( std::string name );
  이름을 갖는 좀비를 생성하고, 이를 반환하므로 function scope 밖에서도 사용 가능하다.
- void randomChump( std::string name );
  이름을 갖는 좀비를 생성하고, 스스로 announce 한다.
- 이 문제의 핵심은 어떤 경우에 좀비를 스택 또는 힙에 할당하면 좋을지 결정하는 것이다.
- 좀비는 원할 때 소멸 되어야 한다. 소멸자는 디버깅을 위해 그들의 이름을 출력해야 한다.
# Exercise 01: Moar brainz!
## Usage
```
```
## Summary
```
Turn-in directory : ex01/
Files to turn in : Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp,
zombieHorde.cpp
Forbidden functions : None
```
## Detail
  - horde of Zombies(좀비 떼)를 만들 때이다.
  - Zombie* zombieHorde( int N, std::string name );를 알맞는 파일에 구현하라.
  - 한 번의 할당으로 N 개의 좀비 개체들이 만들어져야 한다. 그러면 좀비들로 초기화 되어야 하고, 그들 각각에게 매개변수로 들어온 이름을 부여한다. 반환값은 처음 좀비의 포인터를 반환한다.
  - 나만의 테스트를 구현하여 zombieHorde()함수가 예상대로 작동하는지 확인해라. 각 좀비에 대해 announce()를 호출하라.
  - 모든 좀비들을 위한 delete를 잊지 말고, memory leaks 를 확인해라.
# Exercise 02: HI THIS IS BRAIN
## Usage
```
```
## Summary
  ```
Turn-in directory : ex02/
Files to turn in : Makefile, main.cpp
Forbidden functions : None
  ```
## Detail
  - 다음을 포함하는 프로그램을 작성하시오.
    - "HI THIS IS BRAIN" 로 초기화된 string 변수
    - stringPTR: 스트링 포인터
    - stringREF: 스트링 레퍼런스
  - 프로그램은 출력해야 한다.
    - string 변수의 메모리 주소
    - stringPTR 의 주소
    - stringREF 의 주소
  - 마지막으로
    - string 변수의 값
    - stringPTR의 값
    - stringREF의 값
  - 이 문제의 핵심은 새로 보는 reference 에 대한 이해이다. 이는 단지 주소 조작에 대한 또 다른 구문이다.
# ex03: 
## Usage
```
```
## Summary
```

```
## Detail

# ex04: 
## Usage
```
```
## Summary
## Detail
# ex05: 
## Usage
```
```
## Summary
## Detail
# ex06: 
## Usage
```
```
## Summary
## Detail
