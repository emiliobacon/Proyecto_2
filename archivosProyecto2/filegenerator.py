import random

lastnames = ['Mejia', 'Lopez', 'Perez', 'Leon', 'Barrios', 'Bautista', 'Morales', 'Lima', 'Ruiz', 'Barillas', 'Vasquez']
names = ['Daniel', 'Andrea', 'Ana', 'Luz', 'Manuel', 'Lucia', 'Evelyn', 'Alejandro', 'Sebastian', 'Kevin']
schools = ['ingenieria', 'humanidades', 'salud', 'ambientales', 'economia']

level = ['pregrado', 'postgrado', 'doctorado']
dpis = ['0101', '0102', '0113', '0108', '0413']

positions = ['decano', 'coordinador', 'vicedecano', 'rector', 'vicerector', 'conserje', 'comunicador', 'jardinero', 'programador', 'nutricionista', 'bibliotecario']

studentsFile = open('estudiantes.csv', mode='w', encoding='utf-8')
print('writing student file...\n')

i = 0
while (i < 1000):
    coursesSize = random.randint(1, 5)

    courses = ['matematica', 'calculo', 'programacion', 'compiladores', 'biologia', 'microeconomia', 'macroeconomia', 'razonamiento', 'deporte', 'auditoria', 'neurologia', 'energia']
    studentCourses = []
    j = 0
    while (j < coursesSize):
        randomCourse = random.choice(courses)
        courses.remove(randomCourse)
        courseWithNote = f'{randomCourse} {random.randint(1, 100)}'
        studentCourses.append(courseWithNote)
        j = j + 1

    dpiPostfix = random.choice(dpis)
    dpi = f'{random.randint(1000, 9999)} {random.randint(10000, 99999)} {dpiPostfix}'

    line = ','.join([random.choice(lastnames), random.choice(names), str(random.randint(1994, 2021)), dpi, random.choice(schools), random.choice(level)] + studentCourses)

    print(line)
    studentsFile.write(line + "\n")

    i = i + 1

studentsFile.close()
print('\nfinished writing students file...\n')

print('\nwriting workers file...\n')
workersFile = open('trabajadores.csv', mode='w', encoding='utf-8')

lastnames = ['Sanabria', 'Rodriguez', 'Portillo', 'Sanchez', 'Argueta', 'Gutierrez', 'Colom', 'Arzu', 'Castillo', 'Cerezo', 'Valdez']
names = ['Gabriela', 'Francisco', 'Guadalupe', 'Alvaro', 'Alfonso', 'Jimmy', 'Patricia', 'Jacobo', 'Nahomi', 'Laura']

i = 0
while (i < 500):
    initialDate = f'{random.randint(1980,2020)}{str(random.randint(1, 12)).zfill(2)}{str(random.randint(1, 28)).zfill(2)}'

    isATeacher = random.choice([True, False])
    preline = [random.choice(lastnames), random.choice(names), dpi, initialDate, str(round(random.uniform(2866.98, 60000.05), 2)), str(isATeacher).lower()]

    if isATeacher:
        courses = ['matematica', 'calculo', 'programacion', 'compiladores', 'biologia', 'microeconomia', 'macroeconomia', 'razonamiento', 'deporte', 'auditoria', 'neurologia', 'energia']
        teachingCourses = []
        coursesSize = random.randint(1, 3)
        j = 0
        while (j < coursesSize):
            randomCourse = random.choice(courses)
            courses.remove(randomCourse)
            teachingCourses.append(randomCourse)
            j = j + 1
        preline = preline + teachingCourses
    else:
        preline.append(random.choice(positions))

    line = ','.join(preline)

    print(line)
    workersFile.write(line + "\n")

    i = i + 1

workersFile.close()