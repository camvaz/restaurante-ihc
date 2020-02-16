-- drop database restaurante;
create database restaurante;

use restaurante;
-- -----------------------------------------------------
-- Usuario
-- -----------------------------------------------------
CREATE TABLE Usuario(
  idUsuario INT NOT NULL,
  Contrasena VARCHAR(45) NOT NULL,
  Rol VARCHAR(45) NOT NULL,
  NombreUsuario VARCHAR(45) NOT NULL,
  Foto BLOB NULL,
  PRIMARY KEY (idUsuario));
  
 

-- -----------------------------------------------------
-- CategoriaMenu
-- -----------------------------------------------------
CREATE TABLE CategoriaMenu (
  idCategoriaMenu INT NOT NULL auto_increment,
  Nombre VARCHAR(45) NOT NULL,
  PRIMARY KEY (idCategoriaMenu));

insert into CategoriaMenu(Nombre)values('entradas');
insert into CategoriaMenu(Nombre)values('parilla');
insert into CategoriaMenu(Nombre)values('mar');
insert into CategoriaMenu(Nombre)values('postre');
insert into CategoriaMenu(Nombre)values('ensalada');
insert into CategoriaMenu(Nombre)values('sopas');
insert into CategoriaMenu(Nombre)values('guarnicion');
insert into CategoriaMenu(Nombre)values('infantil');
insert into CategoriaMenu(Nombre)values('contele');
insert into CategoriaMenu(Nombre)values('vino');



-- -----------------------------------------------------
-- Platillo
-- -----------------------------------------------------
CREATE TABLE Platillos(
  idPlatillo INT NOT NULL auto_increment,
  Nombre VARCHAR(45) NOT NULL,
  Precio FLOAT NOT NULL,
  Tiempo TIME NULL,
  Ingredientes varchar(600),
  idCategoriaMenu INT NOT NULL,
  PRIMARY KEY (idPlatillo),
  FOREIGN KEY (idCategoriaMenu)
  REFERENCES CategoriaMenu(idCategoriaMenu));



-- PLATILLOS DE ENTRADAS
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PULPO A LOS CUATRO CHILES','$0.00',10,'Guajillo / Morita / Ancho / Pasilla / Cachelos / Espárragos',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CHISTORRA A LA PARRILLA','0.00',10,'',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('MOLLEJAS AL CARBÓN','0.00',10,'',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CARPACHO DE PULPO','0.00',10,'Cebolla/ Pimiento / Vinagreta de soya',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CARPACHO DE ATÚN','0.00',10,'',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CARPACHO DE BIFE DE LOMO','0.00',10,'Arúgula / Pimiento / Alcaparra / Cebolla',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('QUESO PROVOLONE ESTILO ALFARO','0.00',10,'',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CHORIZO ARGENTINO A LA PARRILLA','0.00',10,'',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('Guajillo / Morita / Ancho / Pasilla / Cachelos / Espárragos','$0.00',10,'',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CAMARONES CON PULPO AL AJILLO','0.00',10,'Ajo / Chile guajillo fritos en olivo',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('QUESO FUNDIDO','0.00',10,'',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('QUESO FUNDIDO CON CHISTORRA','0.00',10,'',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PIMIENTO RELLENO DE PULPO','0.00',10,'Al gratín / Provoleta / Salsa de pimiento',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PLATO DE VEGETALES AL CARBÓN','0.00',10,'Pimiento / Nopal / Espárragos / Berenjena/ Portobello / Calabaza',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PICO DE GALLO','0.00',10,'',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CHAMPIÑONES AL AJILLO','0.00',10,'Ajo / Chile guajillo fritos en olivo',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('QUESO PANELA','0.00',10,'',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('DADOS DE ATÚN','0.00',15,'Vinagreta de soya / Aguacate / Ajonjolí negro',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('EMPANADAS CRISÓSTOMO','0.00',10,'Carne con olivas / Relleno poblano',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('TACOS DE BARBACOA','0.00',10,'Guajillo / Morita / Ancho / Pasilla / Cachelos / Espárragos',1);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('COLIFLOR ASADA','0.00',10,'Aderezada / Asada a la parrilla / Toque de parmesano',1);




/*
-- PLATILLOS DE PARILLA
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PORTER HOUSE',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('BIFE DE CHORIZO',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('BIFE DE CHORIZO',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ARRACHERA A LA PARRILLA',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ARRACHERA A LA PARRILLA',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('FAJITAS DE ARRACHERA ESPECIAL',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PRIME RIB',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CABRERÍA ',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CABRERÍA',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('TAPA DE VACÍO ',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('RIB EYE RAZA WAGYU ESTILO AMERICANO',10,'',2);
-- insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('RIB EYE RAZA WAGYU ESTILO AMERICANO',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('BIFE DE LOMO ASADO A LA PARRILLA',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ASADO DE TIRA',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PICAÑA',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CHULETÓN DE CERDO KUROBUTA ESTILO AMERICANO',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('TOMAHAWK ',10,'',2);
insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('POLLO ASADO ORGÁNICO',10,'',2);
 
-- PLATILLOS DE MAR
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CAMARONES PARRILLAJE',10,'Guarnición del día / Cachelos a las finas hierbas.',3);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('SALMÓN A LAS BRASAS',10,'Guarnición del día / Cachelos a las finas hierbas.',3);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PULPO ASADO AL CARBÓN',10,'Cachelos a las finas hierbas',3);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ATÚN ESTILO RECOVA',10,'Guarnición del día / Cachelos a las finas hierbas / Salsa de cajeta.',3);
 */
 -- PLATILLO POSTRES
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CRÈME BRÛLÉE AL BAILEY’S','0.00',10,'Cremoso postre preparado a base de leche / Naranja / Bailey’s / Azúcar quemada.',4);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('TARTÍN DE CHOCOLATE','0.00',10,'Chocolate amargo / helado de avellana.',4);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('TARTA DE DULCE DE LECHE','0.00',10,'Pasta dulce rellena de crema de dulce de leche / Nuez / Cubierta con una nube de merengue / enjambre de Caramelo.',4);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('HELADO DE TURRÓN','0.00',10,'Turrones de Jijona / Leche / Azúcar / Vainilla / Almendra tostada finamente picada.',4);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CHEESECAKE','0.00',10,'Pastel de queso / Salsa de frambuesa.',4);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('TARTA DE MANZANA','0.00',10,'Manzana / Nuez / Canela / Helado de vainilla.',4);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('KEY LIME PIE','0.00',10,'Suave preparación de limón / Cubierto de una costra dulce / Merengue suizo dorado / Frutas.',4);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('TRILOGÍA DE CHOCOLATE','0.00',10,'Base de panqué / Relleno de mouse / Chocolate cremoso / Cubierto con glaseado / acompañado con futas de la estación / Salsa de zarzamora.',4);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('BROWNIE CON HELADO','0.00',10,'Preparado en casa / Acompañado de helado de vainilla.',4);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PASTEL DE HELADO DE CAFÉ','0.00',10,'Pastel helado preparado a base de café y chocolate belga / Acompañado de bombones glaseados / Salsa de caramelo.',4);
 
 /*
 -- PATILLO ENSALADAS
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ENSALADA CAMPESINA',10,'Jitomate bola / Queso de cabra ceniza / Cebolla / Alcaparra / Fritura de espinaca, Vinagreta de balsámico.',5);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ENSALADA CAMPESTRE',10,'Espinaca / Champiñón / Durazno / Tocino frito / Nuez garapiñada Hojuela de almendra / Queso de cabra ceniza / Aderezo de miel.',5);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ENSALADA TROPICANA',10,'Espinaca / Supremas de toronja y naranja / Fresa / Durazno /Nuez garapiñada Arándano / Vinagreta de cítricos.',5);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ENSALADA DE ESPINACAS CON HIGOS',10,'',5);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('RELLENOS DE QUESO AZUL',10,'Arándano / Nuez de la india / Aderezo de mostaza.',5);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ENSALADA CESAR CON POLLO',10,'Lechuga larga/ Crotones / Queso parmesano / Aderezo de anchoa / Pechuga de pollo.',5);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ENSALADA CÉSAR',10,'Lechuga larga/ Crotones / Queso parmesano / Aderezo de anchoa.',5);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ENSALADA MIXTA',10,'Lechuga sangría/ Alcachofa / Champiñón / Cebolla / Espárragos Pimiento morrón / Jitomate / Queso Parmesano / Vinagreta de balsámico.',5);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ENSALADA SILVESTRE',10,'Mezcla de lechugas y espinaca / Fajitas de pollo / Pera / Queso azul / Nuez de la india / Arándano / Aderezo de queso azul.',5);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ENSALADA PARRILLAJE',10,'Lechuga Sangría / Fresa / Durazno / Nuez garapiñada / Aderezo de queso azul.',5);
 
 
 
 -- PLATILLO SOPAS
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('JUGO DE CARNE CON CAMARÓN',10,'',6);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('SOPA DE MARISCOS',10,'Pulpo / Camarón / Pescado / Mejillón / Almeja Shirla',6);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('JUGO DE CARNE',10,'',6);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('SOPA DEL CHEF',10,'Leche / Chile poblano / Cebolla / Granos de elote / Champiñón / Queso panela',6);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('SOPA DE CEBOLLA AL GRATÍN',10,'Crotón / Queso manchego',6);
 */
 
 -- PLATILLO GUARNICION 
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('BERENJENA ASADA','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CHORIZO ASADO','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ESPINACA A LA CREMA','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('GRANOS DE ELOTE A LA MANTEQUILLA','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('GAJOS DE PAPA A LA FRANCESA','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PORTOBELLO ASADO','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PAPA AL HORNO','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ESPÁRRAGOS TRIGUEROS','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ESPINACA AL VAPOR','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('GUACAMOLE','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('CEBOLLA ASADA','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('ENSALADA VERDE','0.00',10,'',7);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PAPA SARATOGA','0.00',10,'',7);
 
 -- PLATILLO INFANTIL 
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('HAMBURGESA','0.00',10,'',8);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PIZZA','0.00',10,'',8);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('PAPA FRITAS','0.00',10,'',8);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('SABANITA DE RES','0.00',10,'',8);
 insert into Platillos(Nombre,Precio,Tiempo,Ingredientes,idCategoriaMenu)values('MILANESA DE RES','0.00',10,'',8);
 
 
 
 -- -----------------------------------------------------
-- Bebida
-- -----------------------------------------------------

CREATE TABLE Cocteles(
  idBebida INT NOT NULL auto_increment,
  Nombre VARCHAR(45) NULL,
  Precio FLOAT NULL,
  ingredientes varchar(200) not null,
  idCategoriaMenu INT NOT NULL,
  ConSinAlcohol int not null,-- 1 con alcohol 0 sin alcohol
  PRIMARY KEY (idBebida),
  FOREIGN KEY (idCategoriaMenu)
  REFERENCES CategoriaMenu(idCategoriaMenu));
 
 -- PLATILLO CONCTEL
 -- CON ALCOHOL
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('GIN PASSION',10.0,'Ginebra Pink de arándano / Aromatizada con licor de ciruela / Frutas maceradas/decorada con una brocheta de berries / Hielo Seco.',9,1);
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('GIN CHAI',10.0,'Ginebra / Té negro / Leche evaporada / Jarabe natural / Canela / Naranja.',9,1);
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('NIÑA FRESA',10.0,'Ginebra / Fresa / Hielo / Canela / Agua tónica.',9,1);
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('ORANGE GIN',10.0,'Ginebra / Naranja / Canela / Agua mineral / Mermelada de naranja',9,1);
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('GIN DE LICHI',10.0,'Ginebra / Frutos del bosque / Jugo de Lichi.',9,1);
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('GIN DE PEPINO',10.0,'Hendrick’s / Pepino / Hielo / Agua Quina.',9,1);
 
 -- SIN ALCOHOL
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('PAY DE LIMÓN',10,'Galletas María/Jugo de limón /Leche condensada/Leche evaporada/Ralladura de limón / Hielo.',9,0);
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('PARADISE',10,'Piña/Naranja/Fresa/Pera/Zarzamora/Toronja/Cereza/Carambolo/Jarabe / Hielo.',9,0);
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('SMOOTHIE FRAN',10,'Mango/Fresa/Leche evaporada/Leche entera/Jarabe Natural/Jarabe de granadina/Hielo.',9,0);
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('NIEVE DE LICHI',10,'Jugo de Lichi/Hielo/Fresa/Jarabe Natural/Hierbabuena/Romero/Zarzamora.',9,0);
 insert into Cocteles(Nombre,Precio,ingredientes,idCategoriaMenu,ConSinAlcohol)values('KING CONGA',10,'Naranja / Piña / Mango / Granadina / Jarabe natural',9,0);
 
 
 CREATE TABLE Vinos(
  idBebida INT NOT NULL,
  Nombre VARCHAR(45) NULL,
  Precio FLOAT NULL,
  OrigenVino varchar(50) not null,
  idCategoriaMenu INT NOT NULL,
  Tamano varchar(60) not null,
  Ingredientes varchar(50) not null,
  PRIMARY KEY (idBebida),
  FOREIGN KEY (idCategoriaMenu)
  REFERENCES CategoriaMenu(idCategoriaMenu));
 
 -- VINOS
 /*
 -- CHILENOS 
  insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('LAS CONDES RESERVA',10,'VINO CHILENO',10,'750 ml','Carmenere ');
  insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('SANTA DIGNA',10,'VINO CHILENO',10,'750 ml','Carmenere ');
  
  -- VINO ARGENTINO
  insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('LOS HAROLDOS RESERVA',10,'VINO ARGENTINO',10,'750 ml','Malbec');
  insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('TERRAZAS DE LOS ANDES',10,'VINO ARGENTINO',10,'750 ml','Malbec');
  insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('TERRAZAS DE LOS ANDES',10,'VINO ARGENTINO',10,'750 ml','Cabernet Sauvignon');
  insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('GRAFFIGNA',10,'VINO ARGENTINO',10,'750 ml','Malbec');
  
  -- VINO TINTO MEXICANO
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('DON LUIS TERRA RESERVA ESPECIAL L.A CETTO',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Guadalupe | Cabernet Sauvignon | Merlot | Malbec | Petit Verdot');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MONTE XANIC',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Guadalupe | Cabernet Franc ');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('GRAN RICARDO',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Guadalupe | Cabernet Sauvignon | Merlot | Petit Verdot');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('CALIXA MONTE XANIC',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Guadalupe | Cabernet Sauvignon | Shiraz');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('SANTO TOMÁS',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Guadalupe | Barbera');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('202 UVAS',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Montenegro | Malbec | Tempranillo | Syrah');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('APOGEO',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Guadalupe | Nebbiolo');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('SURCO ROJO',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de San Vicente | Cabernet Sauvignon | Nebbiolo');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('ELPA',10,'VINO TINTO MEXICANO',10,'750 ml','Suavignon');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('DISCRETO ENCANTO',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de San Vicente | Cabernet Sauvignon | Grenache | Ruby Cabernet');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('SCIELO RESERVA',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Parras | Shiraz');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('CAÑADA DE LOS ENCINOS',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Guadalupe | Petit Verdot | Zinfandel');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('TIERRA ADENTRO',10,'VINO TINTO MEXICANO',10,'750 ml','Zacatecas | Merlot');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('TIERRA ADENTRO',10,'VINO TINTO MEXICANO',10,'750 ml','Zacatecas | Malbec');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('TABLA Nº1',10,'VINO TINTO MEXICANO',10,'750 ml','Aguascalientes | Malbec');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('TABLA Nº3',10,'VINO TINTO MEXICANO',10,'750 ml','Aguascalientes | Nebbiolo');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('ENTRELÍNEAS',10,'VINO TINTO MEXICANO',10,'750 ml','Aguascalientes | Nebbiolo | Shiraz | Malbec');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('ALTO TINTO GRAN CABERNET',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de San Vicente | Cabernet Sauvignon');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('ALTO TINTO',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de San Vicente | Nebbiolo');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('ALTO TINTO',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de San Vicente | Syrah');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('CHÂTEAU DOMECQ',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Guadalupe | Cabernet Sauvignon | Merlot | Nebbiolo');
 
 -- VINO BLANCO MEXICANO
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MONTE XANIC VIÑA KRISTEL',10,'VINO TINTO MEXICANO',10,'750 ml','Valle de Guadalupe | Sauvignon Blanc');
 
 -- VINO TINTO DE OTROS PAISES
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('CAVIT',10,'TINTO DE OTROS PAISES',10,'750 ml','Trento / Italia | Teroldego | Merlot | Cabermet Sauvignon');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('CAMPO VIEJO RESERVA',10,'TINTO DE OTROS PAISES',10,'750 ml','Bordeaux | Cabernet Sauvignon | Merlot');
 
 -- VINO ESPUMOSO
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MÖET CHANDON BRUT',10,'TINTO ESPUMOSO',10,'750 ml','Chardonnay | Pinot Noir | Pinot Meunier');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('VILARNAU DEMI SEC',10,'TINTO ESPUMOSO',10,'750 ml','D.O. Cava | Macabeo | Parellada | Xarel·lo');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('VILARNAU BRUT',10,'TINTO ESPUMOSO',10,'750 ml','D.O. Cava | Macabeo | Parellada | Chardonnay');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('VEUVE CLICQUOT',10,'TINTO ESPUMOSO',10,'750 ml','Champagne | Pinot Meunier | Chardonnay');
 
 -- VINO ESPAÑOL
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('VEUVE CLICQUOT',10,'VINO TINTO ESPAÑOL',10,'750 ml','BERONIA CRIANZA');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('BERONIA RESERVA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Rioja | Tempranillo | Mazuelo | Graciano');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MARQUÉS DE RISCAL ABA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Rioja | Tempranillo');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MARQUÉS DE RISCAL RESERVA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Rioja | Tempranillo | Garnacha');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MARQUÉS DE ARIENZO CRIANZA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Rioja | Tempranillo');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MARQUÉS DE PLUMA CRIANZA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Ribera del Duero | Tinta Fina');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MATARROMERA CRIANZA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Ribera del Duero | Tinta Fina');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MATARROMERA CRIANZA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Ribera del Duero | Tinta Fina');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('LA PLANTA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Ribera del Duero | Tinta Fina');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('ARZUAGA CRIANZA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Ribera del Duero | Tinta Fina');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('ARZUAGA RESERVA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Ribera del Duero | Tinta Fina');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('CELESTE CRIANZA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Ribera del Duero | Tinta Fina');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('VEGA SICILIA VALBUENA Nº5',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Ribera del Duero | Tinta Fina');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('ELECTO',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Ribera del Duero | Tinta fina');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MONTEABELLÓN 14 MESES',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Ribera del Duero | Tinta Fina');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('EL PÁJARO ROJO',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Bierzo | Mencía');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('JUAN GIL 4 MESES',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Jumilla | Monastrell');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('GRAN SANGRE DE TORO RESERVA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Catalunya | Garnacha | Cariñena | Shiraz');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('DOCE LUNAS',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Somontano | Tempranillo | Cabernet Sauvignon | Garnacha');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('DEPAULA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Castilla | Monastrell');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('LA TRACA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Valencia | Bobal ');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('CAMPO VIEJO COSECHA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Rioja | Tempranillo');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('NUMANTHIA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Toro | Tinta de Toro');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('VIÑAS DEL VERO',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Somontano | Cabernet Sauvignon | Tempranillo ');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('CAMPO VIEJO RESERVA',10,'VINO TINTO ESPAÑOL',10,'750 ml','D.O. Somontano | Cabernet Sauvignon');
 
 -- VINO BLANCO
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('LOS HAROLDOS',10,'VINO BLANCO',10,'750 ml','Torrontes');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MARQUÉS DE RISCAL',10,'VINO BLANCO',10,'750 ml','D.O. Rueda | Verdejo');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('BICO DA RAN',10,'VINO BLANCO',10,'750 ml','D.O. Rías Baixas | Albariño');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('PRINCIPATO',10,'VINO BLANCO',10,'750 ml','Delle Venezie | Pinot Grigio');
 
 
 -- VINO ROSADO 
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MARQUÉS DE RISCAL',10,'VINO ROSADO',10,'750 ml','D.O. Rioja | Garnacha | Tempranillo | Viura | Malvasia');
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('CURSI',10,'VINO ROSADO',10,'750 ml','Valle de Guadalupe | Grenache | Shiraz | Merlot');
  
-- VINO DE POSTRE
 insert into Vinos(Nombre,Precio,OrigenVino,idCategoriaMenu,Tamano,Ingredientes)values('MONTE XANIC VIÑA KRISTEL',10,'VINO DE POSTRE',10,'750 ml','Valencia | Moscatel');
 */
 


-- -----------------------------------------------------
-- Ingredientes
-- -----------------------------------------------------
CREATE TABLE Ingredientes(
  idIngredientes INT NOT NULL,
  Nombre VARCHAR(45) NULL,
  PRIMARY KEY (idIngredientes));


-- -----------------------------------------------------
-- Inventario
-- -----------------------------------------------------
CREATE TABLE Inventario (
  Ingredientes_idIngredientes INT NOT NULL,
  Cantidad INT NOT NULL,
  PRIMARY KEY (Ingredientes_idIngredientes),
  FOREIGN KEY (Ingredientes_idIngredientes)
  REFERENCES Ingredientes(idIngredientes));


-- -----------------------------------------------------
-- Platillo_has_Ingredientes
-- -----------------------------------------------------
CREATE TABLE Platillo_has_Ingredientes (
  Platillo_idPlatillo INT NOT NULL,
  Ingredientes_idIngredientes INT NOT NULL,
  PRIMARY KEY (Platillo_idPlatillo),
  FOREIGN KEY (Platillo_idPlatillo)
  REFERENCES Platillo (idPlatillo),
  FOREIGN KEY (Ingredientes_idIngredientes)
  REFERENCES Ingredientes (idIngredientes));

-- -----------------------------------------------------
-- Mesa
-- -----------------------------------------------------
CREATE TABLE Mesa (
  idMesa INT NOT NULL,
  Comensales INT NOT NULL,
  Usuario_idUsuario INT NOT NULL,
  Estado ENUM('disponible','ocupado','sucio') NOT NULL,
  PRIMARY KEY (idMesa),
  FOREIGN KEY (Usuario_idUsuario)
  REFERENCES Usuario (idUsuario));

-- -----------------------------------------------------
-- Pedido
-- -----------------------------------------------------
CREATE TABLE Pedido(
  idPedido INT NOT NULL,
  Mesa_idMesa INT NOT NULL,
  fecha DATETIME NULL,
  PRIMARY KEY (idPedido),
  FOREIGN KEY (Mesa_idMesa)
  REFERENCES Mesa(idMesa));

-- -----------------------------------------------------
-- Comanda
-- -----------------------------------------------------
CREATE TABLE Comanda(
  idComanda INT NOT NULL,
  Pedido_idPedido INT NOT NULL,
  PRIMARY KEY (idComanda),
  FOREIGN KEY (Pedido_idPedido)
  REFERENCES Pedido(idPedido));


-- -----------------------------------------------------
-- Venta
-- -----------------------------------------------------
CREATE TABLE Venta(
  idVenta INT NOT NULL,
  Subtotal DOUBLE NOT NULL,
  Total DOUBLE NOT NULL,
  Pedido_idPedido INT NOT NULL,
  PRIMARY KEY (idVenta),
  FOREIGN KEY (Pedido_idPedido)
  REFERENCES Pedido(idPedido));


-- -----------------------------------------------------
-- Permisos
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS Permisos(
  idPermisos INT NOT NULL,
  Descripcion VARCHAR(45) NOT NULL,
  Fecha DATE NOT NULL,
  Estado ENUM('aprobado', 'rechazado','en revision') NULL DEFAULT 'en revision',
  Usuario_idUsuario INT NOT NULL,
  PRIMARY KEY (idPermisos),
  FOREIGN KEY (Usuario_idUsuario)
  REFERENCES Usuario(idUsuario));


-- -----------------------------------------------------
-- Nomina
-- -----------------------------------------------------
CREATE TABLE Nomina (
  PagoHora FLOAT NOT NULL,
  HoraEntrada TIME NOT NULL,
  HoraSalida VARCHAR(45) NOT NULL,
  Usuario_idUsuario INT NOT NULL,
  PRIMARY KEY (Usuario_idUsuario),
  FOREIGN KEY (Usuario_idUsuario)
  REFERENCES Usuario(idUsuario));


-- -----------------------------------------------------
-- InformacionPersonal
-- -----------------------------------------------------
CREATE TABLE InformacionPersonal(
  Nombre VARCHAR(45) NOT NULL,
  ApellidoPaterno VARCHAR(45) NOT NULL,
  ApellidoMaterno VARCHAR(45) NOT NULL,
  Telefono VARCHAR(45) NOT NULL,
  Direccion VARCHAR(45) NOT NULL,
  Email VARCHAR(45) NOT NULL,
  Usuario_idUsuario INT NOT NULL,
  PRIMARY KEY (Usuario_idUsuario),
  FOREIGN KEY (Usuario_idUsuario)
  REFERENCES Usuario(idUsuario));


-- -----------------------------------------------------
-- Platillo_has_Comanda
-- -----------------------------------------------------
CREATE TABLE Platillo_has_Comanda(
  Platillo_idPlatillo INT NOT NULL,
  Comanda_idComanda INT NOT NULL,
  Descripcion VARCHAR(45) NULL,
  PRIMARY KEY (Platillo_idPlatillo),
  FOREIGN KEY (Platillo_idPlatillo)
  REFERENCES Platillo(idPlatillo),
  FOREIGN KEY (Comanda_idComanda)
  REFERENCES Comanda (idComanda));





-- -----------------------------------------------------
-- Comanda_has_Bebida1
-- -----------------------------------------------------
CREATE TABLE Comanda_has_Bebida1 (
  Comanda_idComanda INT NOT NULL,
  Bebida_idBebida INT NOT NULL,
  Descripcion VARCHAR(45) NULL,
  PRIMARY KEY (Comanda_idComanda),
  FOREIGN KEY (Comanda_idComanda)
  REFERENCES Comanda(idComanda),
  FOREIGN KEY (Bebida_idBebida)
  REFERENCES Bebida(idBebida));


-- -----------------------------------------------------
-- Bebida_has_Ingredientes
-- -----------------------------------------------------
CREATE TABLE Bebida_has_Ingredientes(
  Bebida_idBebida INT NOT NULL,
  Ingredientes_idIngredientes INT NOT NULL,
  PRIMARY KEY (Bebida_idBebida),
  FOREIGN KEY (Bebida_idBebida)
  REFERENCES Bebida (idBebida),
  FOREIGN KEY (Ingredientes_idIngredientes)
  REFERENCES Ingredientes (idIngredientes));



-- VIEWS
drop view `User`;
create view `User` as
select u.idUsuario,info.nombre, u.foto from Usuario as u 
inner join InformacionPersonal as info
on u.idUsuario=info.Usuario_idUsuario;
-- select * from `User`;

-- DAtos De usuario

select * from usuario;
  Insert into usuario (idUsuario,Contrasena,Rol,NombreUsuario) values (1,'1234','1','Rolas');
  Insert into usuario (idUsuario,Contrasena,Rol,NombreUsuario) values (2,'1234','2','Mesero');
  Insert into usuario (idUsuario,Contrasena,Rol,NombreUsuario) values (3,'1234','3','Cajero');
  Insert into usuario (idUsuario,Contrasena,Rol,NombreUsuario) values (4,'1234','7','Rolas');
