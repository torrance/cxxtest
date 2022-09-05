module CxxTest

using libcxxtest_jll
using CxxWrap

@wrapmodule("libcxxtest.so")

function __init__()
    @initcxx
end

end