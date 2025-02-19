namespace CGAL {

/*!
\ingroup PkgDrawPolygonSet2

opens a new window and draws `aps`, an instance of the `CGAL::Polygon_set_2` class. A call to this function is blocking, that is the program continues as soon as the user closes the window. This function requires CGAL_Qt5, and is only available if the flag CGAL_USE_BASIC_VIEWER is defined at compile time.
\tparam PS an instance of the `CGAL::Polygon_set_2` class.
\param aps the polygon set to draw.

*/
template<class PS>
void draw(const PS& aps);

} /* end namespace CGAL */
