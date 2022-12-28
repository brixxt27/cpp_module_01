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
# Exercise 03: Unnecessary violence
## Usage
```
```
## Summary
```
Turn-in directory : ex03/
Files to turn in : Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h,
hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp
Forbidden functions : None
```
## Detail
  - Weapon 클래스를 구현하라:
    - private string type 변수
    - getType() const reference to type 을 반환하는 멤버 함수
    - setType(std::string type) 은 매개변수로 받은 것을 type 으로 세팅한다. 
  - 이제 HumanA, HumanB 클래스를 만들어라. 둘 다 Weapon 과 name 을 가지고 있다. " (name) attacks with their (weapon name) " 을 출력하는 attack() 이라는 멤버 함수도 있다.
  - HumanA, HumanB 는 사소한 차이를 제외하고 거의 같다.
    - HumanA가 생성자 매개변수로 Weapon 을 가지고 있는 반면에 HumanB 는 가지지 않았다.
    - HumanB 는 항상 무기를 가지고 있지 않을지도 모르지만, HumanA는 항상 무장한다.
  - 만약 이를 제대로 구현했다면, 다음에 오는 코드를 실행했을 때 두 test 모두 attack() 으로 "crude spiked club" 를 출력하고, 다음 "some other type of club" 을 출력할 것이다.
```
int main()
{
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  return 0;
}
```
  - Memory leaks은 없어야 한다.
  - 이 경우에 Weapon은 포인터로 해야 좋을 것 같니? 아니면 레퍼런스로 해야 좋을 것 같니? 시작하기 전에 생각해봐!
# Exercise 04: Sed is for losers
## Usage
```
```
## Summary
  ```
Turn-in directory : ex04/
Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}
Forbidden functions : std::string::replace
  ```
## Detail
  - filename과 s1, s2 의 string을 받는 프로그램을 만들어라.
  - filename 의 file을 열 것이고, 모든 s1을 s2로 교체하여 filename.replace 로 내용을 복사할 것이다.
  - C file 제어 함수는 금지 되어 있고, 이는 치팅 행위로 간주 될 것이다. 모든 멤버 함수는 std::string::replace 를 제외하고 모두 허용된다. 지혜롭게 사용해라!
  - 물론 예상치 못한 에러나 input 에 대한 에러 핸들링을 해야 한다. 프로그램이 예상대로 돌아가는지 확인하기 위한 테스트를 포함해 main문을 작성해라.
  
  
# Exercise 05: Harl 2.0
## Usage
```
```
## Summary
  ```
Turn-in directory : ex05/
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp
Forbidden functions : None
  ```
## Detail
  - Harl class 의 private 멤버 함수 로 다음을 구현해라. • void debug( void );
• void info( void );
• void warning( void );
• void error( void );
  - Harl 은 public 멤버 함수로 파라미터를 통해 들어오는 레벨에 따라 네 개의 멤버 함수를 호출하는 함수를 가지고 있다.
  void complain( std::string level );
  - The goal of this exercise is to use pointers to member functions. This is not a
suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think
twice!
Create and turn in tests to show that Harl complains a lot. You can use the example
comments.
  
# Exercise 06: Harl filter
## Usage
```
```
## Summary
```
Turn-in directory : ex06/
Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp
Forbidden functions : None
```
## Detail
  - 당신은 가끔 Harl이 하는 모든 이야기들을 신경쓰고 싶지 않아. 너가 듣고 싶어하는 log level 에 따라 Harl이 이야기하는 것을 걸러주는 시스템을 구현해라.
  - 네 개의 레벨 중 하나를 인자로 받는 프로그램을 작성해라. 그렇다면 그 레벨과 그 위의 레벨의 메시지들을 전부 출력할 것이다. 예를 들면
  ```
$> ./harlFilter "WARNING"
[ WARNING ]
I think I deserve to have some extra bacon for free.
I've been coming for years whereas you started working here since last month.
[ ERROR ]
This is unacceptable, I want to speak to the manager now.
$> ./harlFilter "I am not sure how tired I am today..."
[ Probably complaining about insignificant problems ]
  ```
  - 비록 Harl 을 처리하는 방법들은 많지만, 가장 효율적인 방식은 Switch 문을 사용하는 것이야.
  - 프로그램 이름은 harlFilter 로 해라.  
  
  
  
  
  
  
  
