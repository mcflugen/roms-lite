export NETCDF_PREFIX=$PREFIX
export MPICH2_PREFIX=$PREFIX

cd src && bash ./build.bash
cp ./build/oceanM $PREFIX/bin

cd .. && python setup.py install
