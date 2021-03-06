<?php
declare(strict_types=1);

/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalconphp.com>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */

namespace Phalcon\Test\Unit\Loader;

use UnitTester;

/**
 * Class GetClassesCest
 */
class GetClassesCest
{
    /**
     * Tests Phalcon\Loader :: getClasses()
     *
     * @param UnitTester $I
     *
     * @author Phalcon Team <team@phalconphp.com>
     * @since  2018-11-13
     */
    public function loaderGetClasses(UnitTester $I)
    {
        $I->wantToTest('Loader - getClasses()');
        $I->skipTest('Need implementation');
    }
}
