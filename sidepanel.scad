module sidepanel(width,depth,height,skew){
    points = [
    [0-skew,0,0], //0
    [width,0,0], //1
    [width,depth,0], //2
    [0-skew,depth,0],//3
    [0,0,height],//4
    [width+skew,0,height],//5
    [width+skew,depth,height],//6
    [0,depth,height]];//7
    faces = [
    [0,1,2,3],
    [4,5,1,0],
    [7,6,5,4],
    [5,6,2,1],
    [6,7,3,2],
    [7,4,0,3]];
    
    polyhedron(points,faces);
}

//aproximat measurmeents, these are not accurate enough to be usefull since we havent finalised the chassis shape
sidepanel(150,10,25,22);
