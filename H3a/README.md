# Tehtävän H3a luokkakaavio

```mermaid
classDiagram
    class Chef {
		#name: string
        +Chef(string)
		+makeSalad() void
        +makeSoup() void
	}
	class ItalianChef{
        +ItalianChef(string)
		+getName() string
        +makePasta() void
	}
	Chef <|-- ItalianChef
```