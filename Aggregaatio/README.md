# H4 Agregaatio tehtävän luokkadiagrammi


```mermaid
classDiagram
	class Employee{
		- string fname
		- string lname
		+ Employee()
		+ Employee( string, string)
		+ printEmployee() void
	}
	class Company{
		- string companyName
		- Employee employeeList
		+ Company()
		+ Company(string)
		+ addEmployee(Employee) void
		+ printEmployees() void
	}

	Company "*" o-- "*" Employee : works
	
		
```

## Tietokanta

Jos tämän sovelluksen tapainen data pitäisi tallentaa
relaatiotietokantaan, niin ratkaisu olisi tällainen:


- Employee ja Company taulujen välillä yhteys monen suhde moneen. Tarvitaa
siis välitystaulu.

### ER-Kaavio

```mermaid

erDiagram
	Company ||--o{ company_employee: "has employees"
	Employee ||--o{ company_employee: "works"
	
	Company{
		INT idCompany PK
		VARCHAR(40) companyName

	}
	Employee{
		INT idEmployee PK
		VARCHAR(30) fname
		VARCHAR(30) lname
	}
	
	company_employee{
		INT idCompany PK, FK
		INT idEmployee PK, FK
	}
		
```