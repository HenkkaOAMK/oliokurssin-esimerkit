# Tehtävän H3b luokkakaavio

```mermaid
classDiagram
    class Animal {
		+Anima()
		+~Animal()
		+callOut() void
	}
	class Dog{
        +Dog()
		+callOut() void
	}
	Animal <|-- Dog
```